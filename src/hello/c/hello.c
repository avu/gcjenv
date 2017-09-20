#include <jni.h>
#include <stdio.h>

JNIEXPORT void JNICALL
Java_HelloWorld_print(JNIEnv *env, jobject obj)
{
    static int c = 0;
    char str[100];
    sprintf(str, "[%d]", c);
    setenv("VAR123", str, 1);
    printf("(%d)\n", c);
    c++;
}
