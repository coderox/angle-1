// GENERATED FILE - DO NOT EDIT.
// Generated by generate_entry_points.py using data from gl.xml.
//
// Copyright 2019 The ANGLE Project Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//
// Context_gl_4_3_autogen.h: Creates a macro for interfaces in Context.

#ifndef ANGLE_CONTEXT_GL_4_3_AUTOGEN_H_
#define ANGLE_CONTEXT_GL_4_3_AUTOGEN_H_

#define ANGLE_GL_4_3_CONTEXT_API                                                                   \
    void clearBufferData(GLenum target, GLenum internalformat, GLenum format, GLenum type,         \
                         const void *data);                                                        \
    void clearBufferSubData(GLenum target, GLenum internalformat, GLintptr offset,                 \
                            GLsizeiptr size, GLenum format, GLenum type, const void *data);        \
    void copyImageSubData(GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX,            \
                          GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget,                \
                          GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei srcWidth,    \
                          GLsizei srcHeight, GLsizei srcDepth);                                    \
    void getInternalformati64v(GLenum target, GLenum internalformat, GLenum pname,                 \
                               GLsizei bufSize, GLint64 *params);                                  \
    void invalidateBufferData(BufferID bufferPacked);                                              \
    void invalidateBufferSubData(BufferID bufferPacked, GLintptr offset, GLsizeiptr length);       \
    void invalidateTexImage(TextureID texturePacked, GLint level);                                 \
    void invalidateTexSubImage(TextureID texturePacked, GLint level, GLint xoffset, GLint yoffset, \
                               GLint zoffset, GLsizei width, GLsizei height, GLsizei depth);       \
    void multiDrawArraysIndirect(GLenum mode, const void *indirect, GLsizei drawcount,             \
                                 GLsizei stride);                                                  \
    void multiDrawElementsIndirect(GLenum mode, GLenum type, const void *indirect,                 \
                                   GLsizei drawcount, GLsizei stride);                             \
    void shaderStorageBlockBinding(GLuint program, GLuint storageBlockIndex,                       \
                                   GLuint storageBlockBinding);                                    \
    void texBufferRange(GLenum target, GLenum internalformat, BufferID bufferPacked,               \
                        GLintptr offset, GLsizeiptr size);                                         \
    void textureView(TextureID texturePacked, GLenum target, GLuint origtexture,                   \
                     GLenum internalformat, GLuint minlevel, GLuint numlevels, GLuint minlayer,    \
                     GLuint numlayers);                                                            \
    void vertexAttribLFormat(GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);

#endif  // ANGLE_CONTEXT_API_4_3_AUTOGEN_H_
