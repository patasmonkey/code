/*
 * Original Source  : /tmp/__omni_tmp__13653/a_pp.c
 * Language         : C
 * Compiled Time    : 2018-09-05 16:58:58
 * Compiler Info    : XcodeML/C-FrontEnd
 * Compiler Version : 1.3.0
 */
# 1 "/tmp/__omni_tmp__13653/a_pp.c"
typedef unsigned long size_t;
typedef unsigned char __u_char;
typedef unsigned short __u_short;
typedef unsigned int __u_int;
typedef unsigned long __u_long;
typedef char __int8_t;
typedef unsigned char __uint8_t;
typedef short __int16_t;
typedef unsigned short __uint16_t;
typedef int __int32_t;
typedef unsigned int __uint32_t;
typedef long __int64_t;
typedef unsigned long __uint64_t;
typedef long __quad_t;
typedef unsigned long __u_quad_t;
typedef unsigned long __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long __ino_t;
typedef unsigned long __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned long __nlink_t;
typedef long __off_t;
typedef long __off64_t;
typedef int __pid_t;
struct anon_type_1___fsid_t {
int __val[2];
};
typedef struct anon_type_1___fsid_t __fsid_t;
typedef long __clock_t;
typedef unsigned long __rlim_t;
typedef unsigned long __rlim64_t;
typedef unsigned int __id_t;
typedef long __time_t;
typedef unsigned int __useconds_t;
typedef long __suseconds_t;
typedef int __daddr_t;
typedef int __key_t;
typedef int __clockid_t;
typedef void * __timer_t;
typedef long __blksize_t;
typedef long __blkcnt_t;
typedef long __blkcnt64_t;
typedef unsigned long __fsblkcnt_t;
typedef unsigned long __fsblkcnt64_t;
typedef unsigned long __fsfilcnt_t;
typedef unsigned long __fsfilcnt64_t;
typedef long __fsword_t;
typedef long __ssize_t;
typedef long __syscall_slong_t;
typedef unsigned long __syscall_ulong_t;
typedef long __loff_t;
typedef long * __qaddr_t;
typedef char * __caddr_t;
typedef long __intptr_t;
typedef unsigned int __socklen_t;
union anon_type_3___value {
unsigned int __wch;
char __wchb[4];
};
typedef struct anon_type_2___mbstate_t __mbstate_t;
typedef __builtin_va_list __gnuc_va_list;
struct _IO_jump_t;
typedef void _IO_lock_t;
enum __codecvt_result {
__codecvt_ok = 0,
__codecvt_partial = 1,
__codecvt_error = 2,
__codecvt_noconv = 3
};
struct _IO_FILE_plus;
typedef long __io_read_fn(void * __cookie, char * __buf, unsigned long __nbytes);
typedef long __io_write_fn(void * __cookie, char const * __buf, unsigned long __n);
typedef int __io_seek_fn(void * __cookie, long * __pos, int __w);
typedef int __io_close_fn(void * __cookie);
typedef __builtin_va_list va_list;
typedef long off_t;
typedef long ssize_t;
struct _IO_FILE;
struct _IO_marker;
typedef struct _IO_FILE FILE;
typedef struct _IO_FILE __FILE;
struct anon_type_2___mbstate_t {
int __count;
union anon_type_3___value __value;
};
struct anon_type_4__G_fpos_t {
long __pos;
struct anon_type_2___mbstate_t __state;
};
typedef struct anon_type_4__G_fpos_t _G_fpos_t;
struct anon_type_5__G_fpos64_t {
long __pos;
struct anon_type_2___mbstate_t __state;
};
typedef struct anon_type_5__G_fpos64_t _G_fpos64_t;
struct _IO_marker {
struct _IO_marker * _next;
struct _IO_FILE * _sbuf;
int _pos;
};
struct _IO_FILE {
int _flags;
char * _IO_read_ptr;
char * _IO_read_end;
char * _IO_read_base;
char * _IO_write_base;
char * _IO_write_ptr;
char * _IO_write_end;
char * _IO_buf_base;
char * _IO_buf_end;
char * _IO_save_base;
char * _IO_backup_base;
char * _IO_save_end;
struct _IO_marker * _markers;
struct _IO_FILE * _chain;
int _fileno;
int _flags2;
long _old_offset;
unsigned short _cur_column;
char _vtable_offset;
char _shortbuf[1];
void * _lock;
long _offset;
void * __pad1;
void * __pad2;
void * __pad3;
void * __pad4;
unsigned long __pad5;
int _mode;
char _unused2[(((15) * (sizeof(int))) - ((4) * (sizeof(void * )))) - (sizeof(unsigned long))];
};
typedef struct _IO_FILE _IO_FILE;
typedef struct anon_type_4__G_fpos_t fpos_t;
# 1 "/tmp/__omni_tmp__13653/a_pp.c" 
# 1 "<built-in>" 
# 1 "<command-line>" 
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "/tmp/__omni_tmp__13653/a_pp.c" 
# 1 "a.c" 
# 1 "/usr/include/stdio.h" 1 3 4
# 27 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/features.h" 1 3 4
# 364 "/usr/include/features.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 1 3 4
# 415 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 416 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 2 3 4
# 365 "/usr/include/features.h" 2 3 4
# 388 "/usr/include/features.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 1 3 4
# 10 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs-64.h" 1 3 4
# 11 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 2 3 4
# 389 "/usr/include/features.h" 2 3 4
# 28 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/6/include/stddef.h" 1 3 4
# 216 "/usr/lib/gcc/x86_64-linux-gnu/6/include/stddef.h" 3 4
# 34 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4
# 121 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/typesizes.h" 1 3 4
# 122 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4
# 36 "/usr/include/stdio.h" 2 3 4
# 44 "/usr/include/stdio.h" 3 4
# 64 "/usr/include/stdio.h" 3 4
# 74 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/libio.h" 1 3 4
# 31 "/usr/include/libio.h" 3 4
# 1 "/usr/include/_G_config.h" 1 3 4
# 15 "/usr/include/_G_config.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/6/include/stddef.h" 1 3 4
# 16 "/usr/include/_G_config.h" 2 3 4
# 1 "/usr/include/wchar.h" 1 3 4
# 82 "/usr/include/wchar.h" 3 4
# 21 "/usr/include/_G_config.h" 2 3 4
# 32 "/usr/include/libio.h" 2 3 4
# 49 "/usr/include/libio.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/6/include/stdarg.h" 1 3 4
# 40 "/usr/lib/gcc/x86_64-linux-gnu/6/include/stdarg.h" 3 4
# 50 "/usr/include/libio.h" 2 3 4
# 144 "/usr/include/libio.h" 3 4
# 173 "/usr/include/libio.h" 3 4
# 241 "/usr/include/libio.h" 3 4
# 289 "/usr/include/libio.h" 3 4
# 315 "/usr/include/libio.h"
extern struct _IO_FILE_plus _IO_2_1_stdin_;
# 316 "/usr/include/libio.h"
extern struct _IO_FILE_plus _IO_2_1_stdout_;
# 317 "/usr/include/libio.h"
extern struct _IO_FILE_plus _IO_2_1_stderr_;
# 333 "/usr/include/libio.h" 3 4
# 385 "/usr/include/libio.h" 3 4
extern int __underflow(struct _IO_FILE * );
extern int __uflow(struct _IO_FILE * );
extern int __overflow(struct _IO_FILE * , int);
# 429 "/usr/include/libio.h" 3 4
extern int _IO_getc(struct _IO_FILE * __fp);
extern int _IO_putc(int __c, struct _IO_FILE * __fp);
extern __attribute__((nothrow, leaf)) int _IO_feof(struct _IO_FILE * __fp);
extern __attribute__((nothrow, leaf)) int _IO_ferror(struct _IO_FILE * __fp);
extern int _IO_peekc_locked(struct _IO_FILE * __fp);
extern __attribute__((nothrow, leaf)) void _IO_flockfile(struct _IO_FILE * );
extern __attribute__((nothrow, leaf)) void _IO_funlockfile(struct _IO_FILE * );
extern __attribute__((nothrow, leaf)) int _IO_ftrylockfile(struct _IO_FILE * );
# 459 "/usr/include/libio.h" 3 4
extern int _IO_vfscanf(struct _IO_FILE * restrict, char const * restrict, __builtin_va_list, int * restrict);
extern int _IO_vfprintf(struct _IO_FILE * restrict, char const * restrict, __builtin_va_list);
extern long _IO_padn(struct _IO_FILE * , int, long);
extern unsigned long _IO_sgetn(struct _IO_FILE * , void * , unsigned long);
extern long _IO_seekoff(struct _IO_FILE * , long, int, int);
extern long _IO_seekpos(struct _IO_FILE * , long, int);
extern __attribute__((nothrow, leaf)) void _IO_free_backup_area(struct _IO_FILE * );
# 75 "/usr/include/stdio.h" 2 3 4
# 90 "/usr/include/stdio.h" 3 4
# 104 "/usr/include/stdio.h" 3 4
# 166 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/stdio_lim.h" 1 3 4
# 167 "/usr/include/stdio.h" 2 3 4
# 170 "/usr/include/stdio.h"
extern struct _IO_FILE * stdin;
# 171 "/usr/include/stdio.h"
extern struct _IO_FILE * stdout;
# 172 "/usr/include/stdio.h"
extern struct _IO_FILE * stderr;
extern __attribute__((nothrow, leaf)) int remove(char const * __filename);
extern __attribute__((nothrow, leaf)) int rename(char const * __old, char const * __new);
extern __attribute__((nothrow, leaf)) int renameat(int __oldfd, char const * __old, int __newfd, char const * __new);
extern struct _IO_FILE * tmpfile(void);
# 211 "/usr/include/stdio.h" 3 4
extern __attribute__((nothrow, leaf)) char * tmpnam(char * __s);
extern __attribute__((nothrow, leaf)) char * tmpnam_r(char * __s);
# 229 "/usr/include/stdio.h" 3 4
extern __attribute__((nothrow, leaf, malloc)) char * tempnam(char const * __dir, char const * __pfx);
extern int fclose(struct _IO_FILE * __stream);
extern int fflush(struct _IO_FILE * __stream);
# 254 "/usr/include/stdio.h" 3 4
extern int fflush_unlocked(struct _IO_FILE * __stream);
# 268 "/usr/include/stdio.h" 3 4
extern struct _IO_FILE * fopen(char const * restrict __filename, char const * restrict __modes);
extern struct _IO_FILE * freopen(char const * restrict __filename, char const * restrict __modes, struct _IO_FILE * restrict __stream);
# 297 "/usr/include/stdio.h" 3 4
# 308 "/usr/include/stdio.h" 3 4
extern __attribute__((nothrow, leaf)) struct _IO_FILE * fdopen(int __fd, char const * __modes);
# 321 "/usr/include/stdio.h" 3 4
extern __attribute__((nothrow, leaf)) struct _IO_FILE * fmemopen(void * __s, unsigned long __len, char const * __modes);
extern __attribute__((nothrow, leaf)) struct _IO_FILE * open_memstream(char * * __bufloc, unsigned long * __sizeloc);
extern __attribute__((nothrow, leaf)) void setbuf(struct _IO_FILE * restrict __stream, char * restrict __buf);
extern __attribute__((nothrow, leaf)) int setvbuf(struct _IO_FILE * restrict __stream, char * restrict __buf, int __modes, unsigned long __n);
extern __attribute__((nothrow, leaf)) void setbuffer(struct _IO_FILE * restrict __stream, char * restrict __buf, unsigned long __size);
extern __attribute__((nothrow, leaf)) void setlinebuf(struct _IO_FILE * __stream);
extern int fprintf(struct _IO_FILE * restrict __stream, char const * restrict __format, ...);
extern int printf(char const * restrict __format, ...);
extern __attribute__((nothrow)) int sprintf(char * restrict __s, char const * restrict __format, ...);
extern int vfprintf(struct _IO_FILE * restrict __s, char const * restrict __format, __builtin_va_list __arg);
extern int vprintf(char const * restrict __format, __builtin_va_list __arg);
extern __attribute__((nothrow)) int vsprintf(char * restrict __s, char const * restrict __format, __builtin_va_list __arg);
extern __attribute__((nothrow, format(__printf__, 3, 4))) int snprintf(char * restrict __s, unsigned long __maxlen, char const * restrict __format, ...);
extern __attribute__((nothrow, format(__printf__, 3, 0))) int vsnprintf(char * restrict __s, unsigned long __maxlen, char const * restrict __format, __builtin_va_list __arg);
# 414 "/usr/include/stdio.h" 3 4
extern __attribute__((format(__printf__, 2, 0))) int vdprintf(int __fd, char const * restrict __fmt, __builtin_va_list __arg);
extern __attribute__((format(__printf__, 2, 3))) int dprintf(int __fd, char const * restrict __fmt, ...);
extern int fscanf(struct _IO_FILE * restrict __stream, char const * restrict __format, ...);
extern int scanf(char const * restrict __format, ...);
extern __attribute__((nothrow, leaf)) int sscanf(char const * restrict __s, char const * restrict __format, ...);
# 445 "/usr/include/stdio.h" 3 4
extern int fscanf(struct _IO_FILE * restrict __stream, char const * restrict __format, ...) __asm__("__isoc99_fscanf");
extern int scanf(char const * restrict __format, ...) __asm__("__isoc99_scanf");
extern __attribute__((nothrow, leaf)) int sscanf(char const * restrict __s, char const * restrict __format, ...) __asm__("__isoc99_sscanf");
# 465 "/usr/include/stdio.h" 3 4
extern __attribute__((format(__scanf__, 2, 0), format(__scanf__, 2, 0))) int vfscanf(struct _IO_FILE * restrict __s, char const * restrict __format, __builtin_va_list __arg);
extern __attribute__((format(__scanf__, 1, 0), format(__scanf__, 1, 0))) int vscanf(char const * restrict __format, __builtin_va_list __arg);
extern __attribute__((format(__scanf__, 2, 0), nothrow, leaf, format(__scanf__, 2, 0))) int vsscanf(char const * restrict __s, char const * restrict __format, __builtin_va_list __arg);
# 496 "/usr/include/stdio.h" 3 4
extern __attribute__((format(__scanf__, 2, 0), format(__scanf__, 2, 0))) int vfscanf(struct _IO_FILE * restrict __s, char const * restrict __format, __builtin_va_list __arg) __asm__("__isoc99_vfscanf");
extern __attribute__((format(__scanf__, 1, 0), format(__scanf__, 1, 0))) int vscanf(char const * restrict __format, __builtin_va_list __arg) __asm__("__isoc99_vscanf");
extern __attribute__((format(__scanf__, 2, 0), nothrow, leaf, format(__scanf__, 2, 0))) int vsscanf(char const * restrict __s, char const * restrict __format, __builtin_va_list __arg) __asm__("__isoc99_vsscanf");
# 524 "/usr/include/stdio.h" 3 4
extern int fgetc(struct _IO_FILE * __stream);
extern int getc(struct _IO_FILE * __stream);
extern int getchar(void);
# 552 "/usr/include/stdio.h" 3 4
extern int getc_unlocked(struct _IO_FILE * __stream);
extern int getchar_unlocked(void);
# 563 "/usr/include/stdio.h" 3 4
extern int fgetc_unlocked(struct _IO_FILE * __stream);
extern int fputc(int __c, struct _IO_FILE * __stream);
extern int putc(int __c, struct _IO_FILE * __stream);
extern int putchar(int __c);
# 596 "/usr/include/stdio.h" 3 4
extern int fputc_unlocked(int __c, struct _IO_FILE * __stream);
extern int putc_unlocked(int __c, struct _IO_FILE * __stream);
extern int putchar_unlocked(int __c);
extern int getw(struct _IO_FILE * __stream);
extern int putw(int __w, struct _IO_FILE * __stream);
extern char * fgets(char * restrict __s, int __n, struct _IO_FILE * restrict __stream);
# 640 "/usr/include/stdio.h" 3 4
extern __attribute__((deprecated)) char * gets(char * __s);
# 667 "/usr/include/stdio.h" 3 4
extern long __getdelim(char * * restrict __lineptr, unsigned long * restrict __n, int __delimiter, struct _IO_FILE * restrict __stream);
extern long getdelim(char * * restrict __lineptr, unsigned long * restrict __n, int __delimiter, struct _IO_FILE * restrict __stream);
extern long getline(char * * restrict __lineptr, unsigned long * restrict __n, struct _IO_FILE * restrict __stream);
extern int fputs(char const * restrict __s, struct _IO_FILE * restrict __stream);
extern int puts(char const * __s);
extern int ungetc(int __c, struct _IO_FILE * __stream);
extern unsigned long fread(void * restrict __ptr, unsigned long __size, unsigned long __n, struct _IO_FILE * restrict __stream);
extern unsigned long fwrite(void const * restrict __ptr, unsigned long __size, unsigned long __n, struct _IO_FILE * restrict __s);
# 739 "/usr/include/stdio.h" 3 4
extern unsigned long fread_unlocked(void * restrict __ptr, unsigned long __size, unsigned long __n, struct _IO_FILE * restrict __stream);
extern unsigned long fwrite_unlocked(void const * restrict __ptr, unsigned long __size, unsigned long __n, struct _IO_FILE * restrict __stream);
extern int fseek(struct _IO_FILE * __stream, long __off, int __whence);
extern long ftell(struct _IO_FILE * __stream);
extern void rewind(struct _IO_FILE * __stream);
# 775 "/usr/include/stdio.h" 3 4
extern int fseeko(struct _IO_FILE * __stream, long __off, int __whence);
extern long ftello(struct _IO_FILE * __stream);
# 794 "/usr/include/stdio.h" 3 4
extern int fgetpos(struct _IO_FILE * restrict __stream, struct anon_type_4__G_fpos_t * restrict __pos);
extern int fsetpos(struct _IO_FILE * __stream, struct anon_type_4__G_fpos_t const * __pos);
# 817 "/usr/include/stdio.h" 3 4
# 826 "/usr/include/stdio.h" 3 4
extern __attribute__((nothrow, leaf)) void clearerr(struct _IO_FILE * __stream);
extern __attribute__((nothrow, leaf)) int feof(struct _IO_FILE * __stream);
extern __attribute__((nothrow, leaf)) int ferror(struct _IO_FILE * __stream);
extern __attribute__((nothrow, leaf)) void clearerr_unlocked(struct _IO_FILE * __stream);
extern __attribute__((nothrow, leaf)) int feof_unlocked(struct _IO_FILE * __stream);
extern __attribute__((nothrow, leaf)) int ferror_unlocked(struct _IO_FILE * __stream);
extern void perror(char const * __s);
# 1 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h" 1 3 4
# 26 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h" 3 4
# 26 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h"
extern int sys_nerr;
# 27 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h"
extern char const * const sys_errlist[];
# 856 "/usr/include/stdio.h" 2 3 4
extern __attribute__((nothrow, leaf)) int fileno(struct _IO_FILE * __stream);
extern __attribute__((nothrow, leaf)) int fileno_unlocked(struct _IO_FILE * __stream);
# 874 "/usr/include/stdio.h" 3 4
extern struct _IO_FILE * popen(char const * __command, char const * __modes);
extern int pclose(struct _IO_FILE * __stream);
extern __attribute__((nothrow, leaf)) char * ctermid(char * __s);
# 914 "/usr/include/stdio.h" 3 4
extern __attribute__((nothrow, leaf)) void flockfile(struct _IO_FILE * __stream);
extern __attribute__((nothrow, leaf)) int ftrylockfile(struct _IO_FILE * __stream);
extern __attribute__((nothrow, leaf)) void funlockfile(struct _IO_FILE * __stream);
# 944 "/usr/include/stdio.h" 3 4
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
# 6 "a.c" 
#pragma acc karnels
# 7 "a.c"
for(a = (0); a < (2); a++) {
{
# 8 "a.c"
(c[a]) = ((b[a]) + (b[a]));
}
}
# 10 "a.c"
printf("%d %d\n", c[0], a);
# 11 "a.c"
return 0;
}
