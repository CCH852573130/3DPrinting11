/** Copyright (C) 2013 Ultimaker - Released under terms of the AGPLv3 License */
#include <stdio.h>
#include <stdarg.h>
//#ifndef LOGOUTPUT_H
//#define LOGOUTPUT_H
//#ifdef _OPENMP
 //   #include <omp.h>
//#endif // _OPENMP

#include "logoutput.h"

//#include "android/log.h"
#define LOG_TAG "log_debug"
#define LOGD(...) __android_log_print(ANDROID_LOG_DEBUG, LOG_TAG, __VA_ARGS__)
//#define LOGI(...) __android_log_print(ANDROID_LOG_INFO, LOG_TAG, __VA_ARGS__)
//#define logError(...) __android_log_print(ANDROID_LOG_INFO, LOG_TAG, __VA_ARGS__)
//#define logDebug(...) __android_log_print(ANDROID_LOG_INFO, LOG_TAG, __VA_ARGS__)

namespace cura {

static int verbose_level;
static bool progressLogging;

void increaseVerboseLevel()
{
    verbose_level++;
}

void enableProgressLogging()
{
    progressLogging = true;
}}
/*
void logError(const char* fmt, ...)
{
    va_list args;
    va_start(args, fmt);


    LOGI("[ERROR] ");
    #pragma omp critical
    {
        fprintf(stderr, "[ERROR] ");
        vfprintf(stderr, fmt, args);
        fflush(stderr);
    }
    va_end(args);
}

void logWarning(const char* fmt, ...)
{


    LOGI("[WARNING] ");
    va_list args;
    va_start(args, fmt);
    #pragma omp critical
    {
        fprintf(stderr, "[WARNING] ");
        vfprintf(stderr, fmt, args);
        fflush(stderr);
    }
    va_end(args);
}





void logAlways(const char* fmt, ...)
{

    LOGI("  log always ");


    va_list args;
    va_start(args, fmt);
    #pragma omp critical
    {
        vfprintf(stderr, fmt, args);
        fflush(stderr);
    }
    va_end(args);
}

void log(const char* fmt, ...)
{
    va_list args;
    if (verbose_level < 1)
        return;

    va_start(args, fmt);
    #pragma omp critical
    {
        vfprintf(stderr, fmt, args);
        fflush(stderr);
    }
    va_end(args);
}

void logDebug(const char* fmt, ...)
{
    va_list args;
    if (verbose_level < 2)
    {
        return;
    }
    va_start(args, fmt);
    #pragma omp critical
    {
        fprintf(stderr, "[DEBUG] ");
        vfprintf(stderr, fmt, args);
        fflush(stderr);
    }
    va_end(args);
}

void logProgress(const char* type, int value, int maxValue, float percent)
{
    if (!progressLogging)
        return;

    #pragma omp critical
    {
        fprintf(stderr, "Progress:%s:%i:%i \t%f%%\n", type, value, maxValue, percent);
        fflush(stderr);
    }
}
*/
//}//namespace cura