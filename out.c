/*
 * Original Source  : 
 * Language         : 
 * Compiled Time    : 
 * Compiler Info    : 
 * Compiler Version : 
 */
# 1 ""
typedef char __int8_t;
typedef unsigned char __uint8_t;
typedef short __int16_t;
typedef unsigned short __uint16_t;
typedef int __int32_t;
typedef unsigned int __uint32_t;
typedef long long __int64_t;
typedef unsigned long long __uint64_t;
typedef long __darwin_intptr_t;
typedef unsigned int __darwin_natural_t;
typedef int __darwin_ct_rune_t;
union anon_type_1___mbstate_t {
char __mbstate8[128];
long long _mbstateL;
};
typedef union anon_type_1___mbstate_t __mbstate_t;
typedef union anon_type_1___mbstate_t __darwin_mbstate_t;
typedef long __darwin_ptrdiff_t;
typedef unsigned long __darwin_size_t;
typedef __builtin_va_list __darwin_va_list;
typedef int __darwin_wchar_t;
typedef int __darwin_rune_t;
typedef int __darwin_wint_t;
typedef unsigned long __darwin_clock_t;
typedef unsigned int __darwin_socklen_t;
typedef long __darwin_ssize_t;
typedef long __darwin_time_t;
typedef long long __darwin_blkcnt_t;
typedef int __darwin_blksize_t;
typedef int __darwin_dev_t;
typedef unsigned int __darwin_fsblkcnt_t;
typedef unsigned int __darwin_fsfilcnt_t;
typedef unsigned int __darwin_gid_t;
typedef unsigned int __darwin_id_t;
typedef unsigned long long __darwin_ino64_t;
typedef unsigned long long __darwin_ino_t;
typedef unsigned int __darwin_mach_port_name_t;
typedef unsigned int __darwin_mach_port_t;
typedef unsigned short __darwin_mode_t;
typedef long long __darwin_off_t;
typedef int __darwin_pid_t;
typedef unsigned int __darwin_sigset_t;
typedef int __darwin_suseconds_t;
typedef unsigned int __darwin_uid_t;
typedef unsigned int __darwin_useconds_t;
typedef unsigned char __darwin_uuid_t[16];
typedef char __darwin_uuid_string_t[37];
struct _opaque_pthread_attr_t {
long __sig;
char __opaque[56];
};
struct _opaque_pthread_cond_t {
long __sig;
char __opaque[40];
};
struct _opaque_pthread_condattr_t {
long __sig;
char __opaque[8];
};
struct _opaque_pthread_mutex_t {
long __sig;
char __opaque[56];
};
struct _opaque_pthread_mutexattr_t {
long __sig;
char __opaque[8];
};
struct _opaque_pthread_once_t {
long __sig;
char __opaque[8];
};
struct _opaque_pthread_rwlock_t {
long __sig;
char __opaque[192];
};
struct _opaque_pthread_rwlockattr_t {
long __sig;
char __opaque[16];
};
typedef struct _opaque_pthread_attr_t __darwin_pthread_attr_t;
typedef struct _opaque_pthread_cond_t __darwin_pthread_cond_t;
typedef struct _opaque_pthread_condattr_t __darwin_pthread_condattr_t;
typedef unsigned long __darwin_pthread_key_t;
typedef struct _opaque_pthread_mutex_t __darwin_pthread_mutex_t;
typedef struct _opaque_pthread_mutexattr_t __darwin_pthread_mutexattr_t;
typedef struct _opaque_pthread_once_t __darwin_pthread_once_t;
typedef struct _opaque_pthread_rwlock_t __darwin_pthread_rwlock_t;
typedef struct _opaque_pthread_rwlockattr_t __darwin_pthread_rwlockattr_t;
typedef int __darwin_nl_item;
typedef int __darwin_wctrans_t;
typedef unsigned int __darwin_wctype_t;
typedef char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
typedef unsigned char u_int8_t;
typedef unsigned short u_int16_t;
typedef unsigned int u_int32_t;
typedef unsigned long long u_int64_t;
typedef long long register_t;
typedef long intptr_t;
typedef unsigned long uintptr_t;
typedef unsigned long long user_addr_t;
typedef unsigned long long user_size_t;
typedef long long user_ssize_t;
typedef long long user_long_t;
typedef unsigned long long user_ulong_t;
typedef long long user_time_t;
typedef long long user_off_t;
typedef unsigned long long syscall_arg_t;
typedef __builtin_va_list va_list;
typedef unsigned long size_t;
typedef long long fpos_t;
struct __sbuf {
unsigned char * _base;
int _size;
};
struct __sFILEX;
struct __sFILE {
unsigned char * _p;
int _r;
int _w;
short _flags;
short _file;
struct __sbuf _bf;
int _lbfsize;
void * _cookie;
int (* _close)(void * );
int (* _read)(void * , char * , int);
long long (* _seek)(void * , long long, int);
int (* _write)(void * , char const * , int);
struct __sbuf _ub;
struct __sFILEX * _extra;
int _ur;
unsigned char _ubuf[3];
unsigned char _nbuf[1];
struct __sbuf _lb;
int _blksize;
long long _offset;
};
typedef struct __sFILE FILE;
typedef long long off_t;
typedef long ssize_t;
struct __darwin_pthread_handler_rec;
struct __darwin_pthread_handler_rec {
void (* __routine)(void * );
void * __arg;
struct __darwin_pthread_handler_rec * __next;
};
struct _opaque_pthread_t {
long __sig;
struct __darwin_pthread_handler_rec * __cleanup_stack;
char __opaque[8176];
};
typedef struct _opaque_pthread_t * __darwin_pthread_t;
# 1 "a.c" 
# 1 "<built-in>" 
# 1 "<command-line>" 
# 1 "a.c" 
# 1 "/usr/include/stdio.h" 1 3 4
# 64 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/_stdio.h" 1 3 4
# 68 "/usr/include/_stdio.h" 3 4
# 1 "/usr/include/sys/cdefs.h" 1 3 4
# 587 "/usr/include/sys/cdefs.h" 3 4
# 1 "/usr/include/sys/_symbol_aliasing.h" 1 3 4
# 588 "/usr/include/sys/cdefs.h" 2 3 4
# 653 "/usr/include/sys/cdefs.h" 3 4
# 1 "/usr/include/sys/_posix_availability.h" 1 3 4
# 654 "/usr/include/sys/cdefs.h" 2 3 4
# 69 "/usr/include/_stdio.h" 2 3 4
# 1 "/usr/include/Availability.h" 1 3 4
# 206 "/usr/include/Availability.h" 3 4
# 1 "/usr/local/Cellar/gcc/7.1.0/lib/gcc/7/gcc/x86_64-apple-darwin16.5.0/7.1.0/include-fixed/AvailabilityInternal.h" 1 3 4
# 207 "/usr/include/Availability.h" 2 3 4
# 70 "/usr/include/_stdio.h" 2 3 4
# 1 "/usr/include/_types.h" 1 3 4
# 27 "/usr/include/_types.h" 3 4
# 1 "/usr/include/sys/_types.h" 1 3 4
# 33 "/usr/include/sys/_types.h" 3 4
# 1 "/usr/include/machine/_types.h" 1 3 4
# 32 "/usr/include/machine/_types.h" 3 4
# 1 "/usr/include/i386/_types.h" 1 3 4
# 37 "/usr/include/i386/_types.h" 3 4
# 70 "/usr/include/i386/_types.h" 3 4
# 33 "/usr/include/machine/_types.h" 2 3 4
# 34 "/usr/include/sys/_types.h" 2 3 4
# 55 "/usr/include/sys/_types.h" 3 4
# 1 "/usr/include/sys/_pthread/_pthread_types.h" 1 3 4
# 57 "/usr/include/sys/_pthread/_pthread_types.h" 3 4
# 81 "/usr/include/sys/_types.h" 2 3 4
# 28 "/usr/include/_types.h" 2 3 4
# 40 "/usr/include/_types.h" 3 4
# 72 "/usr/include/_stdio.h" 2 3 4
# 1 "/usr/include/sys/_types/_va_list.h" 1 3 4
# 31 "/usr/include/sys/_types/_va_list.h" 3 4
# 1 "/usr/include/machine/types.h" 1 3 4
# 35 "/usr/include/machine/types.h" 3 4
# 1 "/usr/include/i386/types.h" 1 3 4
# 76 "/usr/include/i386/types.h" 3 4
# 1 "/usr/include/sys/_types/_int8_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_int8_t.h" 3 4
# 77 "/usr/include/i386/types.h" 2 3 4
# 1 "/usr/include/sys/_types/_int16_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_int16_t.h" 3 4
# 78 "/usr/include/i386/types.h" 2 3 4
# 1 "/usr/include/sys/_types/_int32_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_int32_t.h" 3 4
# 79 "/usr/include/i386/types.h" 2 3 4
# 1 "/usr/include/sys/_types/_int64_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_int64_t.h" 3 4
# 80 "/usr/include/i386/types.h" 2 3 4
# 1 "/usr/include/sys/_types/_u_int8_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_u_int8_t.h" 3 4
# 82 "/usr/include/i386/types.h" 2 3 4
# 1 "/usr/include/sys/_types/_u_int16_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_u_int16_t.h" 3 4
# 83 "/usr/include/i386/types.h" 2 3 4
# 1 "/usr/include/sys/_types/_u_int32_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_u_int32_t.h" 3 4
# 84 "/usr/include/i386/types.h" 2 3 4
# 1 "/usr/include/sys/_types/_u_int64_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_u_int64_t.h" 3 4
# 85 "/usr/include/i386/types.h" 2 3 4
# 1 "/usr/include/sys/_types/_intptr_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_intptr_t.h" 3 4
# 1 "/usr/include/machine/types.h" 1 3 4
# 31 "/usr/include/sys/_types/_intptr_t.h" 2 3 4
# 93 "/usr/include/i386/types.h" 2 3 4
# 1 "/usr/include/sys/_types/_uintptr_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_uintptr_t.h" 3 4
# 94 "/usr/include/i386/types.h" 2 3 4
# 36 "/usr/include/machine/types.h" 2 3 4
# 32 "/usr/include/sys/_types/_va_list.h" 2 3 4
# 76 "/usr/include/_stdio.h" 2 3 4
# 1 "/usr/include/sys/_types/_size_t.h" 1 3 4
# 31 "/usr/include/sys/_types/_size_t.h" 3 4
# 77 "/usr/include/_stdio.h" 2 3 4
# 1 "/usr/include/sys/_types/_null.h" 1 3 4
# 78 "/usr/include/_stdio.h" 2 3 4
# 1 "/usr/include/sys/stdio.h" 1 3 4
# 37 "/usr/include/sys/stdio.h" 3 4
int renameat(int, char const * , int, char const * );
int renamex_np(char const * , char const * , unsigned int);
int renameatx_np(int, char const * , int, char const * , unsigned int);
# 80 "/usr/include/_stdio.h" 2 3 4
# 92 "/usr/include/_stdio.h" 3 4
# 126 "/usr/include/_stdio.h" 3 4
# 65 "/usr/include/stdio.h" 2 3 4
# 67 "/usr/include/stdio.h"
extern struct __sFILE * __stdinp;
# 68 "/usr/include/stdio.h"
extern struct __sFILE * __stdoutp;
# 69 "/usr/include/stdio.h"
extern struct __sFILE * __stderrp;
# 141 "/usr/include/stdio.h" 3 4
void clearerr(struct __sFILE * );
int fclose(struct __sFILE * );
int feof(struct __sFILE * );
int ferror(struct __sFILE * );
int fflush(struct __sFILE * );
int fgetc(struct __sFILE * );
int fgetpos(struct __sFILE * restrict, long long * );
char * fgets(char * restrict, int, struct __sFILE * );
struct __sFILE * fopen(char const * restrict __filename, char const * restrict __mode) __asm__("_fopen");
__attribute__((format(__printf__, 2, 3))) int fprintf(struct __sFILE * restrict, char const * restrict, ...);
int fputc(int, struct __sFILE * );
int fputs(char const * restrict, struct __sFILE * restrict) __asm__("_fputs");
unsigned long fread(void * restrict __ptr, unsigned long __size, unsigned long __nitems, struct __sFILE * restrict __stream);
struct __sFILE * freopen(char const * restrict, char const * restrict, struct __sFILE * restrict) __asm__("_freopen");
__attribute__((format(__scanf__, 2, 3))) int fscanf(struct __sFILE * restrict, char const * restrict, ...);
int fseek(struct __sFILE * , long, int);
int fsetpos(struct __sFILE * , long long const * );
long ftell(struct __sFILE * );
unsigned long fwrite(void const * restrict __ptr, unsigned long __size, unsigned long __nitems, struct __sFILE * restrict __stream) __asm__("_fwrite");
int getc(struct __sFILE * );
int getchar(void);
char * gets(char * );
void perror(char const * );
__attribute__((format(__printf__, 1, 2))) int printf(char const * restrict, ...);
int putc(int, struct __sFILE * );
int putchar(int);
int puts(char const * );
int remove(char const * );
int rename(char const * __old, char const * __new);
void rewind(struct __sFILE * );
__attribute__((format(__scanf__, 1, 2))) int scanf(char const * restrict, ...);
void setbuf(struct __sFILE * restrict, char * restrict);
int setvbuf(struct __sFILE * restrict, char * restrict, int, unsigned long);
__attribute__((format(__printf__, 2, 3))) int sprintf(char * restrict, char const * restrict, ...);
__attribute__((format(__scanf__, 2, 3))) int sscanf(char const * restrict, char const * restrict, ...);
struct __sFILE * tmpfile(void);
__attribute__((deprecated("This function is provided for compatibility reasons only.  Due to security concerns inherent in the design of tmpnam(3), it is highly recommended that you use mkstemp(3) instead."))) char * tmpnam(char * );
int ungetc(int, struct __sFILE * );
__attribute__((format(__printf__, 2, 0))) int vfprintf(struct __sFILE * restrict, char const * restrict, __builtin_va_list);
__attribute__((format(__printf__, 1, 0))) int vprintf(char const * restrict, __builtin_va_list);
__attribute__((format(__printf__, 2, 0))) int vsprintf(char * restrict, char const * restrict, __builtin_va_list);
# 204 "/usr/include/stdio.h" 3 4
char * ctermid(char * );
struct __sFILE * fdopen(int, char const * ) __asm__("_fdopen");
int fileno(struct __sFILE * );
# 231 "/usr/include/stdio.h" 3 4
int pclose(struct __sFILE * );
struct __sFILE * popen(char const * , char const * ) __asm__("_popen");
# 252 "/usr/include/stdio.h" 3 4
int __srget(struct __sFILE * );
__attribute__((format(__scanf__, 2, 0))) int __svfscanf(struct __sFILE * , char const * , __builtin_va_list);
int __swbuf(int, struct __sFILE * );
# 264 "/usr/include/stdio.h"
extern inline __attribute__((always_inline)) int __attribute__((gnu_inline)) __sputc(int _c, struct __sFILE * _p)
{
# 265 "/usr/include/stdio.h"
if(((--(_p->_w)) >= (0)) || (((_p->_w) >= (_p->_lbfsize)) && (((char)(_c)) != ((char)0xA)))) {
# 266 "/usr/include/stdio.h"
return (*((_p->_p)++)) = _c;
}
else {
# 268 "/usr/include/stdio.h"
return __swbuf(_c, _p);
}
}
# 289 "/usr/include/stdio.h" 3 4
void flockfile(struct __sFILE * );
int ftrylockfile(struct __sFILE * );
void funlockfile(struct __sFILE * );
int getc_unlocked(struct __sFILE * );
int getchar_unlocked(void);
int putc_unlocked(int, struct __sFILE * );
int putchar_unlocked(int);
int getw(struct __sFILE * );
int putw(int, struct __sFILE * );
__attribute__((deprecated("This function is provided for compatibility reasons only.  Due to security concerns inherent in the design of tempnam(3), it is highly recommended that you use mkstemp(3) instead."))) char * tempnam(char const * __dir, char const * __prefix) __asm__("_tempnam");
# 328 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/sys/_types/_off_t.h" 1 3 4
# 31 "/usr/include/sys/_types/_off_t.h" 3 4
# 329 "/usr/include/stdio.h" 2 3 4
int fseeko(struct __sFILE * __stream, long long __offset, int __whence);
long long ftello(struct __sFILE * __stream);
__attribute__((format(__printf__, 3, 4))) int snprintf(char * restrict __str, unsigned long __size, char const * restrict __format, ...);
__attribute__((format(__scanf__, 2, 0))) int vfscanf(struct __sFILE * restrict __stream, char const * restrict __format, __builtin_va_list);
__attribute__((format(__scanf__, 1, 0))) int vscanf(char const * restrict __format, __builtin_va_list);
__attribute__((format(__printf__, 3, 0))) int vsnprintf(char * restrict __str, unsigned long __size, char const * restrict __format, __builtin_va_list);
__attribute__((format(__scanf__, 2, 0))) int vsscanf(char const * restrict __str, char const * restrict __format, __builtin_va_list);
# 353 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/sys/_types/_ssize_t.h" 1 3 4
# 31 "/usr/include/sys/_types/_ssize_t.h" 3 4
# 354 "/usr/include/stdio.h" 2 3 4
__attribute__((format(__printf__, 2, 3))) int dprintf(int, char const * restrict, ...);
__attribute__((format(__printf__, 2, 0))) int vdprintf(int, char const * restrict, __builtin_va_list);
long getdelim(char * * restrict __linep, unsigned long * restrict __linecapp, int __delimiter, struct __sFILE * restrict __stream);
long getline(char * * restrict __linep, unsigned long * restrict __linecapp, struct __sFILE * restrict __stream);
struct __sFILE * fmemopen(void * restrict __buf, unsigned long __size, char const * restrict __mode);
struct __sFILE * open_memstream(char * * __bufp, unsigned long * __sizep);
# 371 "/usr/include/stdio.h"
extern int const sys_nerr;
# 372 "/usr/include/stdio.h"
extern char const * const sys_errlist[];
__attribute__((format(__printf__, 2, 3))) int asprintf(char * * restrict, char const * restrict, ...);
char * ctermid_r(char * );
char * fgetln(struct __sFILE * , unsigned long * );
char const * fmtcheck(char const * , char const * );
int fpurge(struct __sFILE * );
void setbuffer(struct __sFILE * , char * , int);
int setlinebuf(struct __sFILE * );
__attribute__((format(__printf__, 2, 0))) int vasprintf(char * * restrict, char const * restrict, __builtin_va_list);
struct __sFILE * zopen(char const * , char const * , int);
struct __sFILE * funopen(void const * , int (* )(void * , char * , int), int (* )(void * , char const * , int), long long (* )(void * , long long, int), int (* )(void * ));
# 411 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/secure/_stdio.h" 1 3 4
# 31 "/usr/include/secure/_stdio.h" 3 4
# 1 "/usr/include/secure/_common.h" 1 3 4
# 32 "/usr/include/secure/_stdio.h" 2 3 4
# 42 "/usr/include/secure/_stdio.h" 3 4
extern int __sprintf_chk(char * restrict, int, unsigned long, char const * restrict, ...);
# 52 "/usr/include/secure/_stdio.h" 3 4
extern int __snprintf_chk(char * restrict, unsigned long, int, unsigned long, char const * restrict, ...);
extern int __vsprintf_chk(char * restrict, int, unsigned long, char const * restrict, __builtin_va_list);
extern int __vsnprintf_chk(char * restrict, unsigned long, int, unsigned long, char const * restrict, __builtin_va_list);
# 412 "/usr/include/stdio.h" 2 3 4
# 2 "a.c" 2
# 2 "a.c" 
# 2 "a.c"
int main()
{
# 3 "a.c"
int a;
# 4 "a.c"
int b[2] = {100, 1};
# 5 "a.c"
int c[2];
#pragma acc karnels
# 7 "a.c"
for(a = (0); a < (2); a++) {
{
# 8 "a.c"
if(a % (2)) {
# 8 "a.c"
(c[a]) = ((b[a]) + (b[a]));
}
}
}
# 10 "a.c"
printf("%d %d\n", c[0], a);
# 11 "a.c"
return 0;
}
