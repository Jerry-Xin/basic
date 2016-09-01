#include<jni.h>
#include"JNIDemo.h"
#include<stdio.h>


JNIEXPORT void JNICALL Java_JNIDemo_sayHello
(JNIEnv * env, jobject jobj){
    printf("Hello,World!\n");
}
