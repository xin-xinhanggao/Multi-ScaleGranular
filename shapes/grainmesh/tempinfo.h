#include <mitsuba/core/plugin.h>

#ifndef TEMPINFO_H
#define TEMPINFO_H

MTS_NAMESPACE_BEGIN

typedef enum {
    EPT,
    VPT,
    DA,
    DEBUG
} MODES_T;


struct GrainIntersectionInfo{
    bool valid;
    MODES_T rendermode;
    void* object;

    Transform tr;

    Float radius;
    Float x;
    Float y;
    Float z;
    Float w;
};

struct hitInfo{
    void * hitObject;
    Point hitPoint;
};

MTS_NAMESPACE_END

#endif
