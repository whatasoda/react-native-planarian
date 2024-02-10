#include <jni.h>
#include "react-native-planarian.h"

extern "C"
JNIEXPORT jdouble JNICALL
Java_com_planarian_PlanarianModule_nativeMultiply(JNIEnv *env, jclass type, jdouble a, jdouble b) {
    return planarian::multiply(a, b);
}
