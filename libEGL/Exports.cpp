#include "Exports.hpp"

Library* OriginalEGL = nullptr;

ptr_eglBindAPI                       optr_eglBindAPI;
ptr_eglBindTexImage                  optr_eglBindTexImage;
ptr_eglChooseConfig                  optr_eglChooseConfig;
ptr_eglCopyBuffers                   optr_eglCopyBuffers;
ptr_eglCreateContext                 optr_eglCreateContext;
ptr_eglCreatePbufferFromClientBuffer optr_eglCreatePbufferFromClientBuffer;
ptr_eglCreatePbufferSurface          optr_eglCreatePbufferSurface;
ptr_eglCreatePixmapSurface           optr_eglCreatePixmapSurface;
ptr_eglCreateWindowSurface           optr_eglCreateWindowSurface;
ptr_eglDestroyContext                optr_eglDestroyContext;
ptr_eglDestroySurface                optr_eglDestroySurface;
ptr_eglGetConfigAttrib               optr_eglGetConfigAttrib;
ptr_eglGetConfigs                    optr_eglGetConfigs;
ptr_eglGetCurrentContext             optr_eglGetCurrentContext;
ptr_eglGetCurrentDisplay             optr_eglGetCurrentDisplay;
ptr_eglGetCurrentSurface             optr_eglGetCurrentSurface;
ptr_eglGetDisplay                    optr_eglGetDisplay;
ptr_eglGetError                      optr_eglGetError;
ptr_eglGetProcAddress                optr_eglGetProcAddress;
ptr_eglInitialize                    optr_eglInitialize;
ptr_eglMakeCurrent                   optr_eglMakeCurrent;
ptr_eglQueryAPI                      optr_eglQueryAPI;
ptr_eglQueryContext                  optr_eglQueryContext;
ptr_eglQueryString                   optr_eglQueryString;
ptr_eglQuerySurface                  optr_eglQuerySurface;
ptr_eglReleaseTexImage               optr_eglReleaseTexImage;
ptr_eglReleaseThread                 optr_eglReleaseThread;
ptr_eglSurfaceAttrib                 optr_eglSurfaceAttrib;
ptr_eglSwapBuffers                   optr_eglSwapBuffers;
ptr_eglSwapInterval                  optr_eglSwapInterval;
ptr_eglTerminate                     optr_eglTerminate;
ptr_eglWaitClient                    optr_eglWaitClient;
ptr_eglWaitGL                        optr_eglWaitGL;
ptr_eglWaitNative                    optr_eglWaitNative;

bool __stdcall Initialize(void)
{
    char Root[MAX_PATH];
    //GetSystemDirectoryA(Root, MAX_PATH);
    #ifdef _MSC_VER
        strcat_s(Root, "C:/Users/Brandon/Desktop/libegl.dll");
    #else
        strcat(Root, "C:/Users/Brandon/Desktop/libegl.dll");
    #endif

    OriginalEGL = new Library("C:/Users/Brandon/Desktop/libegl.dll");

	try
	{
	    OriginalEGL->FunctionAddress(optr_eglBindAPI, "eglBindAPI");
        OriginalEGL->FunctionAddress(optr_eglBindTexImage, "eglBindTexImage");
        OriginalEGL->FunctionAddress(optr_eglChooseConfig, "eglChooseConfig");
        OriginalEGL->FunctionAddress(optr_eglCopyBuffers, "eglCopyBuffers");
        OriginalEGL->FunctionAddress(optr_eglCreateContext, "eglCreateContext");
        OriginalEGL->FunctionAddress(optr_eglCreatePbufferFromClientBuffer, "eglCreatePbufferFromClientBuffer");
        OriginalEGL->FunctionAddress(optr_eglCreatePbufferSurface, "eglCreatePbufferSurface");
        OriginalEGL->FunctionAddress(optr_eglCreatePixmapSurface, "eglCreatePixmapSurface");
        OriginalEGL->FunctionAddress(optr_eglCreateWindowSurface, "eglCreateWindowSurface");
        OriginalEGL->FunctionAddress(optr_eglDestroyContext, "eglDestroyContext");
        OriginalEGL->FunctionAddress(optr_eglDestroySurface, "eglDestroySurface");
        OriginalEGL->FunctionAddress(optr_eglGetConfigAttrib, "eglGetConfigAttrib");
        OriginalEGL->FunctionAddress(optr_eglGetConfigs, "eglGetConfigs");
        OriginalEGL->FunctionAddress(optr_eglGetCurrentContext, "eglGetCurrentContext");
        OriginalEGL->FunctionAddress(optr_eglGetCurrentDisplay, "eglGetCurrentDisplay");
        OriginalEGL->FunctionAddress(optr_eglGetCurrentSurface, "eglGetCurrentSurface");
        OriginalEGL->FunctionAddress(optr_eglGetDisplay, "eglGetDisplay");
        OriginalEGL->FunctionAddress(optr_eglGetError, "eglGetError");
        OriginalEGL->FunctionAddress(optr_eglGetProcAddress, "eglGetProcAddress");
        OriginalEGL->FunctionAddress(optr_eglInitialize, "eglInitialize");
        OriginalEGL->FunctionAddress(optr_eglMakeCurrent, "eglMakeCurrent");
        OriginalEGL->FunctionAddress(optr_eglQueryAPI, "eglQueryAPI");
        OriginalEGL->FunctionAddress(optr_eglQueryContext, "eglQueryContext");
        OriginalEGL->FunctionAddress(optr_eglQueryString, "eglQueryString");
        OriginalEGL->FunctionAddress(optr_eglQuerySurface, "eglQuerySurface");
        OriginalEGL->FunctionAddress(optr_eglReleaseTexImage, "eglReleaseTexImage");
        OriginalEGL->FunctionAddress(optr_eglReleaseThread, "eglReleaseThread");
        OriginalEGL->FunctionAddress(optr_eglSurfaceAttrib, "eglSurfaceAttrib");
        OriginalEGL->FunctionAddress(optr_eglSwapBuffers, "eglSwapBuffers");
        OriginalEGL->FunctionAddress(optr_eglSwapInterval, "eglSwapInterval");
        OriginalEGL->FunctionAddress(optr_eglTerminate, "eglTerminate");
        OriginalEGL->FunctionAddress(optr_eglWaitClient, "eglWaitClient");
        OriginalEGL->FunctionAddress(optr_eglWaitGL, "eglWaitGL");
        OriginalEGL->FunctionAddress(optr_eglWaitNative, "eglWaitNative");

	}
	catch(std::exception &e)
	{
	    MessageBox(nullptr, e.what(), "ERROR!", 0);
		return false;
	}
	return true;
}

bool __stdcall DeInitialize(void)
{
	if (OriginalEGL)
	{
		delete OriginalEGL;
		OriginalEGL = nullptr;
		return true;
	}
	return false;
}


EGLBoolean __stdcall Hook_eglBindAPI(EGLenum api)
{
	return optr_eglBindAPI(api);
}

EGLBoolean __stdcall Hook_eglBindTexImage(EGLDisplay dpy, EGLSurface surface, EGLint buffer)
{
    char b[32];
    sprintf(b, "Swapped: %d", getpid());
    MessageBox(NULL, b, "Notice", 0);
	return optr_eglBindTexImage(dpy, surface, buffer);
}

EGLBoolean __stdcall Hook_eglChooseConfig(EGLDisplay dpy, const EGLint *attrib_list, EGLConfig *configs, EGLint config_size, EGLint *num_config)
{
	return optr_eglChooseConfig(dpy, attrib_list, configs, config_size, num_config);
}

EGLBoolean __stdcall Hook_eglCopyBuffers(EGLDisplay dpy, EGLSurface surface, EGLNativePixmapType target)
{
	return optr_eglCopyBuffers(dpy, surface, target);
}

EGLContext __stdcall Hook_eglCreateContext(EGLDisplay dpy, EGLConfig config, EGLContext share_context, const EGLint *attrib_list)
{
	return optr_eglCreateContext(dpy, config, share_context, attrib_list);
}

EGLSurface __stdcall Hook_eglCreatePbufferFromClientBuffer(EGLDisplay dpy, EGLenum buftype, EGLClientBuffer buffer, EGLConfig config, const EGLint *attrib_list)
{
	return optr_eglCreatePbufferFromClientBuffer(dpy, buftype, buffer, config, attrib_list);
}

EGLSurface __stdcall Hook_eglCreatePbufferSurface(EGLDisplay dpy, EGLConfig config, const EGLint *attrib_list)
{
	return optr_eglCreatePbufferSurface(dpy, config, attrib_list);
}

EGLSurface __stdcall Hook_eglCreatePixmapSurface(EGLDisplay dpy, EGLConfig config, EGLNativePixmapType pixmap, const EGLint *attrib_list)
{
	return optr_eglCreatePixmapSurface(dpy, config, pixmap, attrib_list);
}

EGLSurface __stdcall Hook_eglCreateWindowSurface(EGLDisplay dpy, EGLConfig config, EGLNativeWindowType win, const EGLint *attrib_list)
{
	return optr_eglCreateWindowSurface(dpy, config, win, attrib_list);
}

EGLBoolean __stdcall Hook_eglDestroyContext(EGLDisplay dpy, EGLContext ctx)
{
	return optr_eglDestroyContext(dpy, ctx);
}

EGLBoolean __stdcall Hook_eglDestroySurface(EGLDisplay dpy, EGLSurface surface)
{
	return optr_eglDestroySurface(dpy, surface);
}

EGLBoolean __stdcall Hook_eglGetConfigAttrib(EGLDisplay dpy, EGLConfig config, EGLint attribute, EGLint *value)
{
	return optr_eglGetConfigAttrib(dpy, config, attribute, value);
}

EGLBoolean __stdcall Hook_eglGetConfigs(EGLDisplay dpy, EGLConfig *configs, EGLint config_size, EGLint *num_config)
{
	return optr_eglGetConfigs(dpy, configs, config_size, num_config);
}

EGLContext __stdcall Hook_eglGetCurrentContext(void)
{
	return optr_eglGetCurrentContext();
}

EGLDisplay __stdcall Hook_eglGetCurrentDisplay(void)
{
	return optr_eglGetCurrentDisplay();
}

EGLSurface __stdcall Hook_eglGetCurrentSurface(EGLint readdraw)
{
	return optr_eglGetCurrentSurface(readdraw);
}

EGLDisplay __stdcall Hook_eglGetDisplay(EGLNativeDisplayType display_id)
{
	return optr_eglGetDisplay(display_id);
}

EGLint __stdcall Hook_eglGetError(void)
{
	return optr_eglGetError();
}

__eglMustCastToProperFunctionPointerType __stdcall Hook_eglGetProcAddress(const char *procname)
{
	return optr_eglGetProcAddress(procname);
}

EGLBoolean __stdcall Hook_eglInitialize(EGLDisplay dpy, EGLint *major, EGLint *minor)
{
	return optr_eglInitialize(dpy, major, minor);
}

EGLBoolean __stdcall Hook_eglMakeCurrent(EGLDisplay dpy, EGLSurface draw, EGLSurface read, EGLContext ctx)
{
	return optr_eglMakeCurrent(dpy, draw, read, ctx);
}

EGLenum __stdcall Hook_eglQueryAPI(void)
{
	return optr_eglQueryAPI();
}

EGLBoolean __stdcall Hook_eglQueryContext(EGLDisplay dpy, EGLContext ctx, EGLint attribute, EGLint *value)
{
	return optr_eglQueryContext(dpy, ctx, attribute, value);
}

const char *__stdcall Hook_eglQueryString(EGLDisplay dpy, EGLint name)
{
	return optr_eglQueryString(dpy, name);
}

EGLBoolean __stdcall Hook_eglQuerySurface(EGLDisplay dpy, EGLSurface surface, EGLint attribute, EGLint *value)
{
	return optr_eglQuerySurface(dpy, surface, attribute, value);
}

EGLBoolean __stdcall Hook_eglReleaseTexImage(EGLDisplay dpy, EGLSurface surface, EGLint buffer)
{
	return optr_eglReleaseTexImage(dpy, surface, buffer);
}

EGLBoolean __stdcall Hook_eglReleaseThread(void)
{
	return optr_eglReleaseThread();
}

EGLBoolean __stdcall Hook_eglSurfaceAttrib(EGLDisplay dpy, EGLSurface surface, EGLint attribute, EGLint value)
{
	return optr_eglSurfaceAttrib(dpy, surface, attribute, value);
}

EGLBoolean __stdcall Hook_eglSwapBuffers(EGLDisplay dpy, EGLSurface surface)
{
	return optr_eglSwapBuffers(dpy, surface);
}

EGLBoolean __stdcall Hook_eglSwapInterval(EGLDisplay dpy, EGLint interval)
{
	return optr_eglSwapInterval(dpy, interval);
}

EGLBoolean __stdcall Hook_eglTerminate(EGLDisplay dpy)
{
	return optr_eglTerminate(dpy);
}

EGLBoolean __stdcall Hook_eglWaitClient(void)
{
	return optr_eglWaitClient();
}

EGLBoolean __stdcall Hook_eglWaitGL(void)
{
	return optr_eglWaitGL();
}

EGLBoolean __stdcall Hook_eglWaitNative(EGLint engine)
{
	return optr_eglWaitNative(engine);
}
