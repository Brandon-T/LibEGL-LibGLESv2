#ifndef EXPORTS_HPP_INCLUDED
#define EXPORTS_HPP_INCLUDED

#include <stdexcept>
#include <EGL/egl.h>
#include "Library.hpp"
#include <process.h>

extern Library* OriginalEGL;
extern "C" bool __stdcall Initialize(void);
extern "C" bool __stdcall DeInitialize(void);

typedef EGLBoolean (__stdcall *ptr_eglBindAPI)(EGLenum api);
typedef EGLBoolean (__stdcall *ptr_eglBindTexImage)(EGLDisplay dpy, EGLSurface surface, EGLint buffer);
typedef EGLBoolean (__stdcall *ptr_eglChooseConfig)(EGLDisplay dpy, const EGLint *attrib_list, EGLConfig *configs, EGLint config_size, EGLint *num_config);
typedef EGLBoolean (__stdcall *ptr_eglCopyBuffers)(EGLDisplay dpy, EGLSurface surface, EGLNativePixmapType target);
typedef EGLContext (__stdcall *ptr_eglCreateContext)(EGLDisplay dpy, EGLConfig config, EGLContext share_context, const EGLint *attrib_list);
typedef EGLSurface (__stdcall *ptr_eglCreatePbufferFromClientBuffer)(EGLDisplay dpy, EGLenum buftype, EGLClientBuffer buffer, EGLConfig config, const EGLint *attrib_list);
typedef EGLSurface (__stdcall *ptr_eglCreatePbufferSurface)(EGLDisplay dpy, EGLConfig config, const EGLint *attrib_list);
typedef EGLSurface (__stdcall *ptr_eglCreatePixmapSurface)(EGLDisplay dpy, EGLConfig config, EGLNativePixmapType pixmap, const EGLint *attrib_list);
typedef EGLSurface (__stdcall *ptr_eglCreateWindowSurface)(EGLDisplay dpy, EGLConfig config, EGLNativeWindowType win, const EGLint *attrib_list);
typedef EGLBoolean (__stdcall *ptr_eglDestroyContext)(EGLDisplay dpy, EGLContext ctx);
typedef EGLBoolean (__stdcall *ptr_eglDestroySurface)(EGLDisplay dpy, EGLSurface surface);
typedef EGLBoolean (__stdcall *ptr_eglGetConfigAttrib)(EGLDisplay dpy, EGLConfig config, EGLint attribute, EGLint *value);
typedef EGLBoolean (__stdcall *ptr_eglGetConfigs)(EGLDisplay dpy, EGLConfig *configs, EGLint config_size, EGLint *num_config);
typedef EGLContext (__stdcall *ptr_eglGetCurrentContext)(void);
typedef EGLDisplay (__stdcall *ptr_eglGetCurrentDisplay)(void);
typedef EGLSurface (__stdcall *ptr_eglGetCurrentSurface)(EGLint readdraw);
typedef EGLDisplay (__stdcall *ptr_eglGetDisplay)(EGLNativeDisplayType display_id);
typedef EGLint (__stdcall *ptr_eglGetError)(void);
typedef __eglMustCastToProperFunctionPointerType (__stdcall *ptr_eglGetProcAddress)(const char *procname);
typedef EGLBoolean (__stdcall *ptr_eglInitialize)(EGLDisplay dpy, EGLint *major, EGLint *minor);
typedef EGLBoolean (__stdcall *ptr_eglMakeCurrent)(EGLDisplay dpy, EGLSurface draw, EGLSurface read, EGLContext ctx);
typedef EGLenum (__stdcall *ptr_eglQueryAPI)(void);
typedef EGLBoolean (__stdcall *ptr_eglQueryContext)(EGLDisplay dpy, EGLContext ctx, EGLint attribute, EGLint *value);
typedef const char* (__stdcall *ptr_eglQueryString)(EGLDisplay dpy, EGLint name);
typedef EGLBoolean (__stdcall *ptr_eglQuerySurface)(EGLDisplay dpy, EGLSurface surface, EGLint attribute, EGLint *value);
typedef EGLBoolean (__stdcall *ptr_eglReleaseTexImage)(EGLDisplay dpy, EGLSurface surface, EGLint buffer);
typedef EGLBoolean (__stdcall *ptr_eglReleaseThread)(void);
typedef EGLBoolean (__stdcall *ptr_eglSurfaceAttrib)(EGLDisplay dpy, EGLSurface surface, EGLint attribute, EGLint value);
typedef EGLBoolean (__stdcall *ptr_eglSwapBuffers)(EGLDisplay dpy, EGLSurface surface);
typedef EGLBoolean (__stdcall *ptr_eglSwapInterval)(EGLDisplay dpy, EGLint interval);
typedef EGLBoolean (__stdcall *ptr_eglTerminate)(EGLDisplay dpy);
typedef EGLBoolean (__stdcall *ptr_eglWaitClient)(void);
typedef EGLBoolean (__stdcall *ptr_eglWaitGL)(void);
typedef EGLBoolean (__stdcall *ptr_eglWaitNative)(EGLint engine);

extern "C" EGLBoolean __stdcall Hook_eglBindAPI(EGLenum api);
extern "C" EGLBoolean __stdcall Hook_eglBindTexImage(EGLDisplay dpy, EGLSurface surface, EGLint buffer);
extern "C" EGLBoolean __stdcall Hook_eglChooseConfig(EGLDisplay dpy, const EGLint *attrib_list, EGLConfig *configs, EGLint config_size, EGLint *num_config);
extern "C" EGLBoolean __stdcall Hook_eglCopyBuffers(EGLDisplay dpy, EGLSurface surface, EGLNativePixmapType target);
extern "C" EGLContext __stdcall Hook_eglCreateContext(EGLDisplay dpy, EGLConfig config, EGLContext share_context, const EGLint *attrib_list);
extern "C" EGLSurface __stdcall Hook_eglCreatePbufferFromClientBuffer(EGLDisplay dpy, EGLenum buftype, EGLClientBuffer buffer, EGLConfig config, const EGLint *attrib_list);
extern "C" EGLSurface __stdcall Hook_eglCreatePbufferSurface(EGLDisplay dpy, EGLConfig config, const EGLint *attrib_list);
extern "C" EGLSurface __stdcall Hook_eglCreatePixmapSurface(EGLDisplay dpy, EGLConfig config, EGLNativePixmapType pixmap, const EGLint *attrib_list);
extern "C" EGLSurface __stdcall Hook_eglCreateWindowSurface(EGLDisplay dpy, EGLConfig config, EGLNativeWindowType win, const EGLint *attrib_list);
extern "C" EGLBoolean __stdcall Hook_eglDestroyContext(EGLDisplay dpy, EGLContext ctx);
extern "C" EGLBoolean __stdcall Hook_eglDestroySurface(EGLDisplay dpy, EGLSurface surface);
extern "C" EGLBoolean __stdcall Hook_eglGetConfigAttrib(EGLDisplay dpy, EGLConfig config, EGLint attribute, EGLint *value);
extern "C" EGLBoolean __stdcall Hook_eglGetConfigs(EGLDisplay dpy, EGLConfig *configs, EGLint config_size, EGLint *num_config);
extern "C" EGLContext __stdcall Hook_eglGetCurrentContext(void);
extern "C" EGLDisplay __stdcall Hook_eglGetCurrentDisplay(void);
extern "C" EGLSurface __stdcall Hook_eglGetCurrentSurface(EGLint readdraw);
extern "C" EGLDisplay __stdcall Hook_eglGetDisplay(EGLNativeDisplayType display_id);
extern "C" EGLint __stdcall Hook_eglGetError(void);
extern "C" __eglMustCastToProperFunctionPointerType __stdcall Hook_eglGetProcAddress(const char *procname);
extern "C" EGLBoolean __stdcall Hook_eglInitialize(EGLDisplay dpy, EGLint *major, EGLint *minor);
extern "C" EGLBoolean __stdcall Hook_eglMakeCurrent(EGLDisplay dpy, EGLSurface draw, EGLSurface read, EGLContext ctx);
extern "C" EGLenum __stdcall Hook_eglQueryAPI(void);
extern "C" EGLBoolean __stdcall Hook_eglQueryContext(EGLDisplay dpy, EGLContext ctx, EGLint attribute, EGLint *value);
extern "C" const char* __stdcall Hook_eglQueryString(EGLDisplay dpy, EGLint name);
extern "C" EGLBoolean __stdcall Hook_eglQuerySurface(EGLDisplay dpy, EGLSurface surface, EGLint attribute, EGLint *value);
extern "C" EGLBoolean __stdcall Hook_eglReleaseTexImage(EGLDisplay dpy, EGLSurface surface, EGLint buffer);
extern "C" EGLBoolean __stdcall Hook_eglReleaseThread(void);
extern "C" EGLBoolean __stdcall Hook_eglSurfaceAttrib(EGLDisplay dpy, EGLSurface surface, EGLint attribute, EGLint value);
extern "C" EGLBoolean __stdcall Hook_eglSwapBuffers(EGLDisplay dpy, EGLSurface surface);
extern "C" EGLBoolean __stdcall Hook_eglSwapInterval(EGLDisplay dpy, EGLint interval);
extern "C" EGLBoolean __stdcall Hook_eglTerminate(EGLDisplay dpy);
extern "C" EGLBoolean __stdcall Hook_eglWaitClient(void);
extern "C" EGLBoolean __stdcall Hook_eglWaitGL(void);
extern "C" EGLBoolean __stdcall Hook_eglWaitNative(EGLint engine);

#endif // EXPORTS_HPP_INCLUDED
