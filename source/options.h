#ifdef XY
#define GEOMETRY_OPTION "(1x,'      * geometry        XY')"
#endif
#ifdef RZ
#define GEOMETRY_OPTION "(1x,'      * geometry        RZ')"
#endif
#ifdef RT
#define GEOMETRY_OPTION "(1x,'      * geometry        RT')"
#endif
#ifdef GRAV
#define GRAVITY_OPTION "(1x,'      * self-gravity    ON ')"
#else
#define GRAVITY_OPTION "(1x,'      * self-gravity    OFF')"
#endif
#ifdef ROTATE
#define ROTATION_OPTION "(1x,'      * rotation        ON ')"
#else
#define ROTATION_OPTION "(1x,'      * rotation        OFF')"
#endif
#ifdef MHD
#define MHD_OPTION "(1x,'      * magnetic fields ON ')"
#else
#define MHD_OPTION "(1x,'      * magnetic fields OFF')"
#endif
#ifdef RAD
#define RADIATION_OPTION "(1x,'      * radiation       ON ')"
#else
#define RADIATION_OPTION "(1x,'      * radiation       OFF')"
#endif
#ifdef PYHYDRO
#define PYTHON_OPTION "(1x,'      * py_connection   ON ')"
#else
#define PYTHON_OPTION "(1x,'      * py_connection   OFF')"
#endif