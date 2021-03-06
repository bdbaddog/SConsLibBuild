/**
* CPibAccess.h
*
* Header file for C
* Interface routines to read & write PIB files.
*
* Note: Do Not Edit this File directly. Modifications to this file
*       will be overriden by PIBTOOL.
*
*   File Header
*   For each data block:
*     Block Name (24 bytes)
*     Size of block in bytes (int)
*     Size of compression buffer (int)
*     Version (int)
*     Data Block
*
* History:
*   Created:   6/01  K. Jones
**/

#ifndef _CPibAccess_H_
#define _CPibAccess_H_

#define _INCLUDE_POSIX_SOURCE

#ifdef DEC4
#define DECOSF
#endif

#ifdef UC_NO_UNDERSCORE
#define UC_NO_UNDERSCORE
#elif defined (LC_NO_UNDERSCORE)
#define LC_NO_UNDERSCORE
#elif defined (LC_UNDERSCORE_BEFORE)
#define LC_UNDERSCORE_BEFORE
#elif defined (LC_UNDERSCORE_AFTER)
#define LC_UNDERSCORE_AFTER
#elif defined (CRAY)
#define UC_NO_UNDERSCORE
#elif defined (DECOSF)
#define LC_UNDERSCORE_BEFORE
#elif defined (HP)
#define LC_NO_UNDERSCORE
#elif defined (IBM)
#define LC_NO_UNDERSCORE
#elif defined (WIN64)
#define LC_UNDERSCORE_BEFORE
#elif defined (WIN32)
#define LC_NO_UNDERSCORE
#elif defined (SUN)
#define LC_UNDERSCORE_AFTER
#elif defined (SGI)
#define LC_UNDERSCORE_AFTER
#elif defined (LINUX)
#define LC_UNDERSCORE_AFTER
#elif defined (LINUX_INTEL)
#define LC_UNDERSCORE_BEFORE
#elif defined (MACOSX)
#define LC_NO_UNDERSCORE
#endif

/* define the sInt type */
#ifdef DEC4
typedef int sInt;
#else
typedef int sInt;
#endif

/* define the unsigned type */
typedef unsigned int uInt;

#ifndef TRUE
#define TRUE 1
#endif
#ifndef FALSE
#define FALSE 0
#endif

#ifdef WIN32
#define off_t __int64
#endif

#ifdef WIN32
#define sInt64 __int64
#else
#define sInt64 long long
#endif

#ifdef LC_UNDERSCORE_BEFORE
#define OpenPibImportFile   _openpibimportfile
#define OpenPibExportFile   _openpibexportfile
#define OpenPibAppendFile   _openpibappendfile
#define ClosePibFile        _closepibfile
#define RewindPibFile       _rewindpibfile
#define openPibBlock        _openpibblock
#define closePibBlock       _closepibblock
#define getNextPibBlock     _getnextpibblock
#define getNextPibBlockLong _getnextpibblocklong
#define skipPibBlock        _skippibblock
#define getPibPos           _getpibpos
#define setPibPos           _setpibpos
#define flushPibFile        _flushpibfile
#define CReadXdrInt         _creadxdrint
#define CReadXdrInt64       _creadxdrint64
#define CReadXdrFloat       _creadxdrfloat
#define CReadXdrDouble      _creadxdrdouble
#define CReadXdrString      _creadxdrstring
#define CReadXdrBytes       _creadxdrbytes
#define CWriteXdrInt        _cwritexdrint
#define CWriteXdrInt64      _cwritexdrint64
#define CWriteXdrFloat      _cwritexdrfloat
#define CWriteXdrDouble     _cwritexdrdouble
#define CWriteXdrString     _cwritexdrstring
#define CWriteXdrBytes      _cwritexdrbytes
#define CReadXdrArrSize     _creadxdrarrsize
#define CReadXdrIntArr      _creadxdrintarr
#define CReadXdrFloatArr    _creadxdrfloatarr
#define CReadXdrDoubleArr   _creadxdrdoublearr
/* - - - - - - - - - - - - - - - - - - - - - - - - - */
#elif (defined LC_UNDERSCORE_AFTER)
#define OpenPibImportFile   openpibimportfile_
#define OpenPibExportFile   openpibexportfile_
#define OpenPibAppendFile   openpibappendfile_
#define ClosePibFile        closepibfile_
#define RewindPibFile       rewindpibfile_
#define openPibBlock        openpibblock_
#define closePibBlock       closepibblock_
#define getNextPibBlock     getnextpibblock_
#define getNextPibBlockLong getnextpibblocklong_
#define skipPibBlock        skippibblock_
#define getPibPos           getpibpos_
#define setPibPos           setpibpos_
#define flushPibFile        flushpibfile_
#define CReadXdrInt         creadxdrint_
#define CReadXdrInt64       creadxdrint64_
#define CReadXdrFloat       creadxdrfloat_
#define CReadXdrDouble      creadxdrdouble_
#define CReadXdrString      creadxdrstring_
#define CReadXdrBytes       creadxdrbytes_
#define CWriteXdrInt        cwritexdrint_
#define CWriteXdrInt64      cwritexdrint64_
#define CWriteXdrFloat      cwritexdrfloat_
#define CWriteXdrDouble     cwritexdrdouble_
#define CWriteXdrString     cwritexdrstring_
#define CWriteXdrBytes      cwritexdrbytes_
#define CReadXdrIntArr      creadxdrintarr_
#define CReadXdrArrSize     creadxdrarrsize_
#define CReadXdrFloatArr    creadxdrfloatarr_
#define CReadXdrDoubleArr   creadxdrdoublearr_
/* - - - - - - - - - - - - - - - - - - - - - - - - - */
#elif (defined LC_NO_UNDERSCORE)
#define OpenPibImportFile   openpibimportfile
#define OpenPibExportFile   openpibexportfile
#define OpenPibAppendFile   openpibappendfile
#define ClosePibFile        closepibfile
#define RewindPibFile       rewindpibfile
#define openPibBlock        openpibblock
#define closePibBlock       closepibblock
#define getNextPibBlock     getnextpibblock
#define getNextPibBlockLong getnextpibblocklong
#define skipPibBlock        skippibblock
#define getPibPos           getpibpos
#define setPibPos           setpibpos
#define flushPibFile        flushpibfile
#define CReadXdrInt         creadxdrint
#define CReadXdrInt64       creadxdrint64
#define CReadXdrFloat       creadxdrfloat
#define CReadXdrDouble      creadxdrdouble
#define CReadXdrString      creadxdrstring
#define CReadXdrBytes       creadxdrbytes
#define CWriteXdrInt        cwritexdrint
#define CWriteXdrInt64      cwritexdrint64
#define CWriteXdrFloat      cwritexdrfloat
#define CWriteXdrDouble     cwritexdrdouble
#define CWriteXdrString     cwritexdrstring
#define CWriteXdrBytes      cwritexdrbytes
#define CReadXdrIntArr      creadxdrintarr
#define CReadXdrArrSize     creadxdrarrsize
#define CReadXdrFloatArr    creadxdrfloatarr
#define CReadXdrDoubleArr   creadxdrdoublearr
/* - - - - - - - - - - - - - - - - - - - - - - - - - */
#elif (defined UC_NO_UNDERSCORE)
#define OpenPibImportFile   OPENPIBIMPORTFILE
#define OpenPibExportFile   OPENPIBEXPORTFILE
#define OpenPibAppendFile   OPENPIBAPPENDFILE
#define ClosePibFile        CLOSEPIBFILE
#define RewindPibFile       REWINDPIBFILE
#define openPibBlock        OPENPIBBLOCK
#define closePibBlock       CLOSEPIBBLOCK
#define getNextPibBlock     GETNEXTPIBBLOCK
#define getNextPibBlockLong GETNEXTPIBBLOCKLONG
#define skipPibBlock        SKIPPIBBLOCK
#define getPibPos           GETPIBPOS
#define setPibPos           SETPIBPOS
#define flushPibFile        FLUSHPIBFILE
#define CReadXdrInt         CREADXDRINT
#define CReadXdrInt64       CREADXDRINT64
#define CReadXdrFloat       CREADXDRFLOAT
#define CReadXdrDouble      CREADXDRDOUBLE
#define CReadXdrString      CREADXDRSTRING
#define CReadXdrBytes       CREADXDRBYTES
#define CWriteXdrInt        CWRITEXDRINT
#define CWriteXdrInt64      CWRITEXDRINT64
#define CWriteXdrFloat      CWRITEXDRFLOAT
#define CWriteXdrDouble     CWRITEXDRDOUBLE
#define CWriteXdrString     CWRITEXDRSTRING
#define CWriteXdrBytes      CWRITEXDRBYTES
#define CReadXdrIntArr      CREADXDRINTARR
#define CReadXdrArrSize     CREADXDRARRSIZE
#define CReadXdrFloatArr    CREADXDRFLOATARR
#define CReadXdrDoubleArr   CREADXDRDOUBLEARR
#endif
/* - - - - - - - - - - - - - - - - - - - - - - - - - */


#include <stdio.h>
#include <stdlib.h>
#include <rpc/rpc.h>

typedef struct {
    /** Output file handle. **/
    FILE *xPib;
    /**  Output file xdr stream. **/
    XDR  xdrPib;
    /** Saves the location of the start of the block. **/
    off_t pibPtr_BlockStart;
    /** Saves the location of the start of the block. **/
    off_t pibPtr_DataStart;
    /* length of compression buffer */
    sInt block_compression;
} PibFile;


/** size of of the header block **/
extern uInt pibBlockHdrSize ;
/****************************
 * File Management Routines *
 ****************************/
void OpenPibImportFile(sInt *err,
                       sInt *fIndex,
                       char *file_xdr,
                       char *pibFileType,
                       char *version,
                       char *description);

void OpenPibExportFile(sInt *err,
                       sInt *fIndex,
                       char *file_xdr,
                       char *pibFileType,
                       char *version,
                       char *description);

void OpenPibAppendFile(sInt *err,
                       sInt *fIndex,
                       char *file_xdr,
                       char *pibFileType,
                       char *version,
                       char *description,
                       off_t *pibPtr_appendPos);

void ClosePibFile(sInt *fIndex);

void RewindPibFile(sInt *err,
                   sInt *fIndex);

void flushPibFile(sInt *fIndex);

/*****************************
 * Block Management Routines *
 *****************************/

void openPibBlock(sInt *err, sInt *fIndex, char *blocktype, sInt* revision);

void closePibBlock(sInt *err, sInt *fIndex);

void getNextPibBlock(sInt *err, sInt *fIndex, char* blocktype, sInt blockparm[]);

void getNextPibBlockLong(sInt *err, sInt *fIndex, char* blocktype, sInt *blocksize,
                   sInt *blockCompression, sInt* version);

void skipPibBlock(sInt *err, sInt *fIndex, sInt *blocksize);

void getPibPos(sInt *fIndex, off_t *pos);

void setPibPos(sInt *err, sInt *fIndex, off_t *pos);

/*****************************
 * Fundamental Type Routines *
 *****************************/

void CReadXdrInt(sInt *err, sInt *fIndex, sInt *val);

void CReadXdrInt64(sInt *err, sInt *fIndex, sInt64 *val);

void CReadXdrFloat(sInt *err, sInt *fIndex, float *val);

void CReadXdrDouble(sInt *err, sInt *fIndex, double *val);

void CReadXdrString(sInt *err, sInt *fIndex, char *val, sInt *maxlen);

void CReadXdrBytes(sInt *err, sInt *fIndex, char *val, sInt *maxlen);

void CWriteXdrInt(sInt *err, sInt *fIndex, sInt *val);

void CWriteXdrInt64(sInt *err, sInt *fIndex, sInt64 *val);

void CWriteXdrFloat(sInt *err, sInt *fIndex, float *val);

void CWriteXdrDouble(sInt *err, sInt *fIndex, double *val);

void CWriteXdrString(sInt *err, sInt *fIndex, char *val, sInt *maxlen);

void CWriteXdrBytes(sInt *err, sInt *fIndex, char *val, sInt *maxlen);

void CReadXdrArrSize(sInt *err, sInt *fIndex, sInt *len);

void CReadXdrIntArr(sInt *err, sInt *fIndex, sInt *len, sInt **val);

void CReadXdrFloatArr(sInt *err, sInt *fIndex, sInt *len, float **val);

void CReadXdrDoubleArr(sInt *err, sInt *fIndex, sInt *len, double **val);


#endif /* _CPibAccess_H_ */
