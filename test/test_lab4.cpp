#include "task1.h"
#include "task2.h"
#include "task3.h"
#include "task4.h"



#include "gtest/gtest.h"

TEST(task1, sort_lines)
{
   char buf[6][256]={"123456","123","12","1","1234","12345"};
   char *p[]={buf[0],buf[1],buf[2],buf[3],buf[4],buf[5]};
   lineSort(p,6);
   ASSERT_STREQ("1", p[0]);
   ASSERT_STREQ("12", p[1]);   
   ASSERT_STREQ("123", p[2]);
   ASSERT_STREQ("1234", p[3]);
}


TEST(task2, reverse_words)
{
        char buf[256]="i'm glad to see you";
        char word[256];
        reverseWords(buf,word);
        ASSERT_STREQ("you see to glad i'm",word);
}


TEST(task3, is_palindrome)
{
        char buf[256]="madamimadam";
        int result=isPalindrome(buf);
        ASSERT_EQ(1,result);
        ASSERT_EQ(0,isPalindrome("my name is Vasya"));
}
