#ifndef FIBONACHI2_H
#define FIBONACHI2_H

#include <gtest/gtest.h>

#include <fcntl.h>
#include <errno.h>
#include <unistd.h>

extern "C" {
#include "myfunc.h"
}

TEST(fibonachiTest2, num0) {
    ASSERT_EQ(fibonachi(0), 0);
    ASSERT_EQ(fibonachi(1), 1);
    ASSERT_EQ(fibonachi(2), 2);
}

TEST(fibonachiTest2, greather2) {
    ASSERT_GT(fibonachi(5), 2);
    ASSERT_GT(fibonachi(10), 55);

}

TEST(fibonachiTest2, negative) {
    ASSERT_EQ(fibonachi(-1), 0);
}

TEST(fibonachiTest, negative2) {
    ASSERT_EQ(fibonachi(-2), 0);
}

TEST(fibonachiTest, negative3) {
    ASSERT_EQ(fibonachi(-3), 0);
}


TEST(fibonachiTest2, inputFile) {
    val = 2;
    char *filename = (char *)malloc(sizeof(char) * 1024);
    sprintf(filename, "%s/input321.txt", INPUTDIR);

    int fd = open(filename, O_RDONLY);
    free(filename);
    if (fd < 0) {
        ASSERT_EQ(errno, 0);
    }

    char *buf = (char *)malloc(sizeof(char) * 512);
    int readcount = read(fd, buf, 512);
    ASSERT_TRUE(readcount > 0);
    close(fd);

    int input = 0;
    int output =0;
    int ret = sscanf(buf, "%d %d", &input, &output);
    free(buf);
    ASSERT_EQ(ret, 2);

    ret = fibonachi(input);
    ASSERT_EQ(ret, output);
}

#endif // FIBONACHI_H