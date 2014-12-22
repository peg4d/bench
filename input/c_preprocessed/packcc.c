# 1 "packcc.c"
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 162 "<built-in>" 3
# 1 "<command line>" 1
# 1 "<built-in>" 2
# 1 "packcc.c" 2
# 42 "packcc.c"
# 1 "/usr/include/stdio.h" 1 3 4
# 64 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/sys/cdefs.h" 1 3 4
# 406 "/usr/include/sys/cdefs.h" 3 4
# 1 "/usr/include/sys/_symbol_aliasing.h" 1 3 4
# 407 "/usr/include/sys/cdefs.h" 2 3 4
# 472 "/usr/include/sys/cdefs.h" 3 4
# 1 "/usr/include/sys/_posix_availability.h" 1 3 4
# 473 "/usr/include/sys/cdefs.h" 2 3 4
# 65 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/Availability.h" 1 3 4
# 144 "/usr/include/Availability.h" 3 4
# 1 "/usr/include/AvailabilityInternal.h" 1 3 4
# 145 "/usr/include/Availability.h" 2 3 4
# 66 "/usr/include/stdio.h" 2 3 4

# 1 "/usr/include/_types.h" 1 3 4
# 27 "/usr/include/_types.h" 3 4
# 1 "/usr/include/sys/_types.h" 1 3 4
# 33 "/usr/include/sys/_types.h" 3 4
# 1 "/usr/include/machine/_types.h" 1 3 4
# 32 "/usr/include/machine/_types.h" 3 4
# 1 "/usr/include/i386/_types.h" 1 3 4
# 37 "/usr/include/i386/_types.h" 3 4
typedef signed char __int8_t;



typedef unsigned char __uint8_t;
typedef short __int16_t;
typedef unsigned short __uint16_t;
typedef int __int32_t;
typedef unsigned int __uint32_t;
typedef long long __int64_t;
typedef unsigned long long __uint64_t;

typedef long __darwin_intptr_t;
typedef unsigned int __darwin_natural_t;
# 70 "/usr/include/i386/_types.h" 3 4
typedef int __darwin_ct_rune_t;





typedef union {
 char __mbstate8[128];
 long long _mbstateL;
} __mbstate_t;

typedef __mbstate_t __darwin_mbstate_t;


typedef long int __darwin_ptrdiff_t;





typedef long unsigned int __darwin_size_t;





typedef __builtin_va_list __darwin_va_list;





typedef int __darwin_wchar_t;




typedef __darwin_wchar_t __darwin_rune_t;


typedef int __darwin_wint_t;




typedef unsigned long __darwin_clock_t;
typedef __uint32_t __darwin_socklen_t;
typedef long __darwin_ssize_t;
typedef long __darwin_time_t;
# 33 "/usr/include/machine/_types.h" 2 3 4
# 34 "/usr/include/sys/_types.h" 2 3 4
# 58 "/usr/include/sys/_types.h" 3 4
struct __darwin_pthread_handler_rec
{
 void (*__routine)(void *);
 void *__arg;
 struct __darwin_pthread_handler_rec *__next;
};
struct _opaque_pthread_attr_t { long __sig; char __opaque[56]; };
struct _opaque_pthread_cond_t { long __sig; char __opaque[40]; };
struct _opaque_pthread_condattr_t { long __sig; char __opaque[8]; };
struct _opaque_pthread_mutex_t { long __sig; char __opaque[56]; };
struct _opaque_pthread_mutexattr_t { long __sig; char __opaque[8]; };
struct _opaque_pthread_once_t { long __sig; char __opaque[8]; };
struct _opaque_pthread_rwlock_t { long __sig; char __opaque[192]; };
struct _opaque_pthread_rwlockattr_t { long __sig; char __opaque[16]; };
struct _opaque_pthread_t { long __sig; struct __darwin_pthread_handler_rec *__cleanup_stack; char __opaque[1168]; };
# 94 "/usr/include/sys/_types.h" 3 4
typedef __int64_t __darwin_blkcnt_t;
typedef __int32_t __darwin_blksize_t;
typedef __int32_t __darwin_dev_t;
typedef unsigned int __darwin_fsblkcnt_t;
typedef unsigned int __darwin_fsfilcnt_t;
typedef __uint32_t __darwin_gid_t;
typedef __uint32_t __darwin_id_t;
typedef __uint64_t __darwin_ino64_t;

typedef __darwin_ino64_t __darwin_ino_t;



typedef __darwin_natural_t __darwin_mach_port_name_t;
typedef __darwin_mach_port_name_t __darwin_mach_port_t;
typedef __uint16_t __darwin_mode_t;
typedef __int64_t __darwin_off_t;
typedef __int32_t __darwin_pid_t;
typedef struct _opaque_pthread_attr_t
   __darwin_pthread_attr_t;
typedef struct _opaque_pthread_cond_t
   __darwin_pthread_cond_t;
typedef struct _opaque_pthread_condattr_t
   __darwin_pthread_condattr_t;
typedef unsigned long __darwin_pthread_key_t;
typedef struct _opaque_pthread_mutex_t
   __darwin_pthread_mutex_t;
typedef struct _opaque_pthread_mutexattr_t
   __darwin_pthread_mutexattr_t;
typedef struct _opaque_pthread_once_t
   __darwin_pthread_once_t;
typedef struct _opaque_pthread_rwlock_t
   __darwin_pthread_rwlock_t;
typedef struct _opaque_pthread_rwlockattr_t
   __darwin_pthread_rwlockattr_t;
typedef struct _opaque_pthread_t
   *__darwin_pthread_t;
typedef __uint32_t __darwin_sigset_t;
typedef __int32_t __darwin_suseconds_t;
typedef __uint32_t __darwin_uid_t;
typedef __uint32_t __darwin_useconds_t;
typedef unsigned char __darwin_uuid_t[16];
typedef char __darwin_uuid_string_t[37];
# 28 "/usr/include/_types.h" 2 3 4
# 39 "/usr/include/_types.h" 3 4
typedef int __darwin_nl_item;
typedef int __darwin_wctrans_t;

typedef __uint32_t __darwin_wctype_t;
# 68 "/usr/include/stdio.h" 2 3 4





typedef __darwin_va_list va_list;




typedef __darwin_size_t size_t;






typedef __darwin_off_t fpos_t;
# 96 "/usr/include/stdio.h" 3 4
struct __sbuf {
 unsigned char *_base;
 int _size;
};


struct __sFILEX;
# 130 "/usr/include/stdio.h" 3 4
typedef struct __sFILE {
 unsigned char *_p;
 int _r;
 int _w;
 short _flags;
 short _file;
 struct __sbuf _bf;
 int _lbfsize;


 void *_cookie;
 int (*_close)(void *);
 int (*_read) (void *, char *, int);
 fpos_t (*_seek) (void *, fpos_t, int);
 int (*_write)(void *, const char *, int);


 struct __sbuf _ub;
 struct __sFILEX *_extra;
 int _ur;


 unsigned char _ubuf[3];
 unsigned char _nbuf[1];


 struct __sbuf _lb;


 int _blksize;
 fpos_t _offset;
} FILE;


extern FILE *__stdinp;
extern FILE *__stdoutp;
extern FILE *__stderrp;
# 239 "/usr/include/stdio.h" 3 4
void clearerr(FILE *);
int fclose(FILE *);
int feof(FILE *);
int ferror(FILE *);
int fflush(FILE *);
int fgetc(FILE *);
int fgetpos(FILE * restrict, fpos_t *);
char *fgets(char * restrict, int, FILE *);



FILE *fopen(const char * restrict, const char * restrict) __asm("_" "fopen" );

int fprintf(FILE * restrict, const char * restrict, ...) __attribute__((__format__ (__printf__, 2, 3)));
int fputc(int, FILE *);
int fputs(const char * restrict, FILE * restrict) __asm("_" "fputs" );
size_t fread(void * restrict, size_t, size_t, FILE * restrict);
FILE *freopen(const char * restrict, const char * restrict,
                 FILE * restrict) __asm("_" "freopen" );
int fscanf(FILE * restrict, const char * restrict, ...) __attribute__((__format__ (__scanf__, 2, 3)));
int fseek(FILE *, long, int);
int fsetpos(FILE *, const fpos_t *);
long ftell(FILE *);
size_t fwrite(const void * restrict, size_t, size_t, FILE * restrict) __asm("_" "fwrite" );
int getc(FILE *);
int getchar(void);
char *gets(char *);
void perror(const char *);
int printf(const char * restrict, ...) __attribute__((__format__ (__printf__, 1, 2)));
int putc(int, FILE *);
int putchar(int);
int puts(const char *);
int remove(const char *);
int rename (const char *, const char *);
void rewind(FILE *);
int scanf(const char * restrict, ...) __attribute__((__format__ (__scanf__, 1, 2)));
void setbuf(FILE * restrict, char * restrict);
int setvbuf(FILE * restrict, char * restrict, int, size_t);
int sprintf(char * restrict, const char * restrict, ...) __attribute__((__format__ (__printf__, 2, 3)));
int sscanf(const char * restrict, const char * restrict, ...) __attribute__((__format__ (__scanf__, 2, 3)));
FILE *tmpfile(void);
char *tmpnam(char *);
int ungetc(int, FILE *);
int vfprintf(FILE * restrict, const char * restrict, va_list) __attribute__((__format__ (__printf__, 2, 0)));
int vprintf(const char * restrict, va_list) __attribute__((__format__ (__printf__, 1, 0)));
int vsprintf(char * restrict, const char * restrict, va_list) __attribute__((__format__ (__printf__, 2, 0)));
# 300 "/usr/include/stdio.h" 3 4
char *ctermid(char *);





FILE *fdopen(int, const char *) __asm("_" "fdopen" );

int fileno(FILE *);
# 319 "/usr/include/stdio.h" 3 4
int pclose(FILE *);



FILE *popen(const char *, const char *) __asm("_" "popen" );
# 341 "/usr/include/stdio.h" 3 4
int __srget(FILE *);
int __svfscanf(FILE *, const char *, va_list) __attribute__((__format__ (__scanf__, 2, 0)));
int __swbuf(int, FILE *);
# 352 "/usr/include/stdio.h" 3 4
static __inline int __sputc(int _c, FILE *_p) {
 if (--_p->_w >= 0 || (_p->_w >= _p->_lbfsize && (char)_c != '\n'))
  return (*_p->_p++ = _c);
 else
  return (__swbuf(_c, _p));
}
# 378 "/usr/include/stdio.h" 3 4
void flockfile(FILE *);
int ftrylockfile(FILE *);
void funlockfile(FILE *);
int getc_unlocked(FILE *);
int getchar_unlocked(void);
int putc_unlocked(int, FILE *);
int putchar_unlocked(int);



int getw(FILE *);
int putw(int, FILE *);


char *tempnam(const char *, const char *) __asm("_" "tempnam" );
# 414 "/usr/include/stdio.h" 3 4
typedef __darwin_off_t off_t;



int fseeko(FILE *, off_t, int);
off_t ftello(FILE *);





int snprintf(char * restrict, size_t, const char * restrict, ...) __attribute__((__format__ (__printf__, 3, 4)));
int vfscanf(FILE * restrict, const char * restrict, va_list) __attribute__((__format__ (__scanf__, 2, 0)));
int vscanf(const char * restrict, va_list) __attribute__((__format__ (__scanf__, 1, 0)));
int vsnprintf(char * restrict, size_t, const char * restrict, va_list) __attribute__((__format__ (__printf__, 3, 0)));
int vsscanf(const char * restrict, const char * restrict, va_list) __attribute__((__format__ (__scanf__, 2, 0)));
# 442 "/usr/include/stdio.h" 3 4
typedef __darwin_ssize_t ssize_t;



int dprintf(int, const char * restrict, ...) __attribute__((__format__ (__printf__, 2, 3))) __attribute__((availability(macosx,introduced=10.7)));
int vdprintf(int, const char * restrict, va_list) __attribute__((__format__ (__printf__, 2, 0))) __attribute__((availability(macosx,introduced=10.7)));
ssize_t getdelim(char ** restrict, size_t * restrict, int, FILE * restrict) __attribute__((availability(macosx,introduced=10.7)));
ssize_t getline(char ** restrict, size_t * restrict, FILE * restrict) __attribute__((availability(macosx,introduced=10.7)));
# 459 "/usr/include/stdio.h" 3 4
extern const int sys_nerr;
extern const char *const sys_errlist[];

int asprintf(char **, const char *, ...) __attribute__((__format__ (__printf__, 2, 3)));
char *ctermid_r(char *);
char *fgetln(FILE *, size_t *);
const char *fmtcheck(const char *, const char *);
int fpurge(FILE *);
void setbuffer(FILE *, char *, int);
int setlinebuf(FILE *);
int vasprintf(char **, const char *, va_list) __attribute__((__format__ (__printf__, 2, 0)));
FILE *zopen(const char *, const char *, int);





FILE *funopen(const void *,
                 int (*)(void *, char *, int),
                 int (*)(void *, const char *, int),
                 fpos_t (*)(void *, fpos_t, int),
                 int (*)(void *));
# 499 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/secure/_stdio.h" 1 3 4
# 31 "/usr/include/secure/_stdio.h" 3 4
# 1 "/usr/include/secure/_common.h" 1 3 4
# 32 "/usr/include/secure/_stdio.h" 2 3 4
# 45 "/usr/include/secure/_stdio.h" 3 4
extern int __sprintf_chk (char * restrict, int, size_t,
     const char * restrict, ...);




extern int __snprintf_chk (char * restrict, size_t, int, size_t,
      const char * restrict, ...);





extern int __vsprintf_chk (char * restrict, int, size_t,
      const char * restrict, va_list);




extern int __vsnprintf_chk (char * restrict, size_t, int, size_t,
       const char * restrict, va_list);
# 500 "/usr/include/stdio.h" 2 3 4
# 43 "packcc.c" 2
# 1 "/usr/include/stdlib.h" 1 3 4
# 65 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/sys/wait.h" 1 3 4
# 79 "/usr/include/sys/wait.h" 3 4
typedef enum {
 P_ALL,
 P_PID,
 P_PGID
} idtype_t;






typedef __darwin_pid_t pid_t;




typedef __darwin_id_t id_t;
# 116 "/usr/include/sys/wait.h" 3 4
# 1 "/usr/include/sys/signal.h" 1 3 4
# 73 "/usr/include/sys/signal.h" 3 4
# 1 "/usr/include/sys/appleapiopts.h" 1 3 4
# 74 "/usr/include/sys/signal.h" 2 3 4







# 1 "/usr/include/machine/signal.h" 1 3 4
# 32 "/usr/include/machine/signal.h" 3 4
# 1 "/usr/include/i386/signal.h" 1 3 4
# 39 "/usr/include/i386/signal.h" 3 4
typedef int sig_atomic_t;
# 55 "/usr/include/i386/signal.h" 3 4
# 1 "/usr/include/i386/_structs.h" 1 3 4
# 56 "/usr/include/i386/signal.h" 2 3 4
# 33 "/usr/include/machine/signal.h" 2 3 4
# 82 "/usr/include/sys/signal.h" 2 3 4
# 148 "/usr/include/sys/signal.h" 3 4
# 1 "/usr/include/sys/_structs.h" 1 3 4
# 57 "/usr/include/sys/_structs.h" 3 4
# 1 "/usr/include/machine/_structs.h" 1 3 4
# 29 "/usr/include/machine/_structs.h" 3 4
# 1 "/usr/include/i386/_structs.h" 1 3 4
# 38 "/usr/include/i386/_structs.h" 3 4
# 1 "/usr/include/mach/i386/_structs.h" 1 3 4
# 43 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_i386_thread_state
{
    unsigned int __eax;
    unsigned int __ebx;
    unsigned int __ecx;
    unsigned int __edx;
    unsigned int __edi;
    unsigned int __esi;
    unsigned int __ebp;
    unsigned int __esp;
    unsigned int __ss;
    unsigned int __eflags;
    unsigned int __eip;
    unsigned int __cs;
    unsigned int __ds;
    unsigned int __es;
    unsigned int __fs;
    unsigned int __gs;
};
# 89 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_fp_control
{
    unsigned short __invalid :1,
        __denorm :1,
    __zdiv :1,
    __ovrfl :1,
    __undfl :1,
    __precis :1,
      :2,
    __pc :2,





    __rc :2,






             :1,
      :3;
};
typedef struct __darwin_fp_control __darwin_fp_control_t;
# 147 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_fp_status
{
    unsigned short __invalid :1,
        __denorm :1,
    __zdiv :1,
    __ovrfl :1,
    __undfl :1,
    __precis :1,
    __stkflt :1,
    __errsumm :1,
    __c0 :1,
    __c1 :1,
    __c2 :1,
    __tos :3,
    __c3 :1,
    __busy :1;
};
typedef struct __darwin_fp_status __darwin_fp_status_t;
# 191 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_mmst_reg
{
 char __mmst_reg[10];
 char __mmst_rsrv[6];
};
# 210 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_xmm_reg
{
 char __xmm_reg[16];
};
# 232 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_i386_float_state
{
 int __fpu_reserved[2];
 struct __darwin_fp_control __fpu_fcw;
 struct __darwin_fp_status __fpu_fsw;
 __uint8_t __fpu_ftw;
 __uint8_t __fpu_rsrv1;
 __uint16_t __fpu_fop;
 __uint32_t __fpu_ip;
 __uint16_t __fpu_cs;
 __uint16_t __fpu_rsrv2;
 __uint32_t __fpu_dp;
 __uint16_t __fpu_ds;
 __uint16_t __fpu_rsrv3;
 __uint32_t __fpu_mxcsr;
 __uint32_t __fpu_mxcsrmask;
 struct __darwin_mmst_reg __fpu_stmm0;
 struct __darwin_mmst_reg __fpu_stmm1;
 struct __darwin_mmst_reg __fpu_stmm2;
 struct __darwin_mmst_reg __fpu_stmm3;
 struct __darwin_mmst_reg __fpu_stmm4;
 struct __darwin_mmst_reg __fpu_stmm5;
 struct __darwin_mmst_reg __fpu_stmm6;
 struct __darwin_mmst_reg __fpu_stmm7;
 struct __darwin_xmm_reg __fpu_xmm0;
 struct __darwin_xmm_reg __fpu_xmm1;
 struct __darwin_xmm_reg __fpu_xmm2;
 struct __darwin_xmm_reg __fpu_xmm3;
 struct __darwin_xmm_reg __fpu_xmm4;
 struct __darwin_xmm_reg __fpu_xmm5;
 struct __darwin_xmm_reg __fpu_xmm6;
 struct __darwin_xmm_reg __fpu_xmm7;
 char __fpu_rsrv4[14*16];
 int __fpu_reserved1;
};


struct __darwin_i386_avx_state
{
 int __fpu_reserved[2];
 struct __darwin_fp_control __fpu_fcw;
 struct __darwin_fp_status __fpu_fsw;
 __uint8_t __fpu_ftw;
 __uint8_t __fpu_rsrv1;
 __uint16_t __fpu_fop;
 __uint32_t __fpu_ip;
 __uint16_t __fpu_cs;
 __uint16_t __fpu_rsrv2;
 __uint32_t __fpu_dp;
 __uint16_t __fpu_ds;
 __uint16_t __fpu_rsrv3;
 __uint32_t __fpu_mxcsr;
 __uint32_t __fpu_mxcsrmask;
 struct __darwin_mmst_reg __fpu_stmm0;
 struct __darwin_mmst_reg __fpu_stmm1;
 struct __darwin_mmst_reg __fpu_stmm2;
 struct __darwin_mmst_reg __fpu_stmm3;
 struct __darwin_mmst_reg __fpu_stmm4;
 struct __darwin_mmst_reg __fpu_stmm5;
 struct __darwin_mmst_reg __fpu_stmm6;
 struct __darwin_mmst_reg __fpu_stmm7;
 struct __darwin_xmm_reg __fpu_xmm0;
 struct __darwin_xmm_reg __fpu_xmm1;
 struct __darwin_xmm_reg __fpu_xmm2;
 struct __darwin_xmm_reg __fpu_xmm3;
 struct __darwin_xmm_reg __fpu_xmm4;
 struct __darwin_xmm_reg __fpu_xmm5;
 struct __darwin_xmm_reg __fpu_xmm6;
 struct __darwin_xmm_reg __fpu_xmm7;
 char __fpu_rsrv4[14*16];
 int __fpu_reserved1;
 char __avx_reserved1[64];
 struct __darwin_xmm_reg __fpu_ymmh0;
 struct __darwin_xmm_reg __fpu_ymmh1;
 struct __darwin_xmm_reg __fpu_ymmh2;
 struct __darwin_xmm_reg __fpu_ymmh3;
 struct __darwin_xmm_reg __fpu_ymmh4;
 struct __darwin_xmm_reg __fpu_ymmh5;
 struct __darwin_xmm_reg __fpu_ymmh6;
 struct __darwin_xmm_reg __fpu_ymmh7;
};
# 402 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_i386_exception_state
{
 __uint16_t __trapno;
 __uint16_t __cpu;
 __uint32_t __err;
 __uint32_t __faultvaddr;
};
# 422 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_x86_debug_state32
{
 unsigned int __dr0;
 unsigned int __dr1;
 unsigned int __dr2;
 unsigned int __dr3;
 unsigned int __dr4;
 unsigned int __dr5;
 unsigned int __dr6;
 unsigned int __dr7;
};
# 454 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_x86_thread_state64
{
 __uint64_t __rax;
 __uint64_t __rbx;
 __uint64_t __rcx;
 __uint64_t __rdx;
 __uint64_t __rdi;
 __uint64_t __rsi;
 __uint64_t __rbp;
 __uint64_t __rsp;
 __uint64_t __r8;
 __uint64_t __r9;
 __uint64_t __r10;
 __uint64_t __r11;
 __uint64_t __r12;
 __uint64_t __r13;
 __uint64_t __r14;
 __uint64_t __r15;
 __uint64_t __rip;
 __uint64_t __rflags;
 __uint64_t __cs;
 __uint64_t __fs;
 __uint64_t __gs;
};
# 509 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_x86_float_state64
{
 int __fpu_reserved[2];
 struct __darwin_fp_control __fpu_fcw;
 struct __darwin_fp_status __fpu_fsw;
 __uint8_t __fpu_ftw;
 __uint8_t __fpu_rsrv1;
 __uint16_t __fpu_fop;


 __uint32_t __fpu_ip;
 __uint16_t __fpu_cs;

 __uint16_t __fpu_rsrv2;


 __uint32_t __fpu_dp;
 __uint16_t __fpu_ds;

 __uint16_t __fpu_rsrv3;
 __uint32_t __fpu_mxcsr;
 __uint32_t __fpu_mxcsrmask;
 struct __darwin_mmst_reg __fpu_stmm0;
 struct __darwin_mmst_reg __fpu_stmm1;
 struct __darwin_mmst_reg __fpu_stmm2;
 struct __darwin_mmst_reg __fpu_stmm3;
 struct __darwin_mmst_reg __fpu_stmm4;
 struct __darwin_mmst_reg __fpu_stmm5;
 struct __darwin_mmst_reg __fpu_stmm6;
 struct __darwin_mmst_reg __fpu_stmm7;
 struct __darwin_xmm_reg __fpu_xmm0;
 struct __darwin_xmm_reg __fpu_xmm1;
 struct __darwin_xmm_reg __fpu_xmm2;
 struct __darwin_xmm_reg __fpu_xmm3;
 struct __darwin_xmm_reg __fpu_xmm4;
 struct __darwin_xmm_reg __fpu_xmm5;
 struct __darwin_xmm_reg __fpu_xmm6;
 struct __darwin_xmm_reg __fpu_xmm7;
 struct __darwin_xmm_reg __fpu_xmm8;
 struct __darwin_xmm_reg __fpu_xmm9;
 struct __darwin_xmm_reg __fpu_xmm10;
 struct __darwin_xmm_reg __fpu_xmm11;
 struct __darwin_xmm_reg __fpu_xmm12;
 struct __darwin_xmm_reg __fpu_xmm13;
 struct __darwin_xmm_reg __fpu_xmm14;
 struct __darwin_xmm_reg __fpu_xmm15;
 char __fpu_rsrv4[6*16];
 int __fpu_reserved1;
};


struct __darwin_x86_avx_state64
{
 int __fpu_reserved[2];
 struct __darwin_fp_control __fpu_fcw;
 struct __darwin_fp_status __fpu_fsw;
 __uint8_t __fpu_ftw;
 __uint8_t __fpu_rsrv1;
 __uint16_t __fpu_fop;


 __uint32_t __fpu_ip;
 __uint16_t __fpu_cs;

 __uint16_t __fpu_rsrv2;


 __uint32_t __fpu_dp;
 __uint16_t __fpu_ds;

 __uint16_t __fpu_rsrv3;
 __uint32_t __fpu_mxcsr;
 __uint32_t __fpu_mxcsrmask;
 struct __darwin_mmst_reg __fpu_stmm0;
 struct __darwin_mmst_reg __fpu_stmm1;
 struct __darwin_mmst_reg __fpu_stmm2;
 struct __darwin_mmst_reg __fpu_stmm3;
 struct __darwin_mmst_reg __fpu_stmm4;
 struct __darwin_mmst_reg __fpu_stmm5;
 struct __darwin_mmst_reg __fpu_stmm6;
 struct __darwin_mmst_reg __fpu_stmm7;
 struct __darwin_xmm_reg __fpu_xmm0;
 struct __darwin_xmm_reg __fpu_xmm1;
 struct __darwin_xmm_reg __fpu_xmm2;
 struct __darwin_xmm_reg __fpu_xmm3;
 struct __darwin_xmm_reg __fpu_xmm4;
 struct __darwin_xmm_reg __fpu_xmm5;
 struct __darwin_xmm_reg __fpu_xmm6;
 struct __darwin_xmm_reg __fpu_xmm7;
 struct __darwin_xmm_reg __fpu_xmm8;
 struct __darwin_xmm_reg __fpu_xmm9;
 struct __darwin_xmm_reg __fpu_xmm10;
 struct __darwin_xmm_reg __fpu_xmm11;
 struct __darwin_xmm_reg __fpu_xmm12;
 struct __darwin_xmm_reg __fpu_xmm13;
 struct __darwin_xmm_reg __fpu_xmm14;
 struct __darwin_xmm_reg __fpu_xmm15;
 char __fpu_rsrv4[6*16];
 int __fpu_reserved1;
 char __avx_reserved1[64];
 struct __darwin_xmm_reg __fpu_ymmh0;
 struct __darwin_xmm_reg __fpu_ymmh1;
 struct __darwin_xmm_reg __fpu_ymmh2;
 struct __darwin_xmm_reg __fpu_ymmh3;
 struct __darwin_xmm_reg __fpu_ymmh4;
 struct __darwin_xmm_reg __fpu_ymmh5;
 struct __darwin_xmm_reg __fpu_ymmh6;
 struct __darwin_xmm_reg __fpu_ymmh7;
 struct __darwin_xmm_reg __fpu_ymmh8;
 struct __darwin_xmm_reg __fpu_ymmh9;
 struct __darwin_xmm_reg __fpu_ymmh10;
 struct __darwin_xmm_reg __fpu_ymmh11;
 struct __darwin_xmm_reg __fpu_ymmh12;
 struct __darwin_xmm_reg __fpu_ymmh13;
 struct __darwin_xmm_reg __fpu_ymmh14;
 struct __darwin_xmm_reg __fpu_ymmh15;
};
# 751 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_x86_exception_state64
{
    __uint16_t __trapno;
    __uint16_t __cpu;
    __uint32_t __err;
    __uint64_t __faultvaddr;
};
# 771 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_x86_debug_state64
{
 __uint64_t __dr0;
 __uint64_t __dr1;
 __uint64_t __dr2;
 __uint64_t __dr3;
 __uint64_t __dr4;
 __uint64_t __dr5;
 __uint64_t __dr6;
 __uint64_t __dr7;
};
# 39 "/usr/include/i386/_structs.h" 2 3 4
# 48 "/usr/include/i386/_structs.h" 3 4
struct __darwin_mcontext32
{
 struct __darwin_i386_exception_state __es;
 struct __darwin_i386_thread_state __ss;
 struct __darwin_i386_float_state __fs;
};


struct __darwin_mcontext_avx32
{
 struct __darwin_i386_exception_state __es;
 struct __darwin_i386_thread_state __ss;
 struct __darwin_i386_avx_state __fs;
};
# 86 "/usr/include/i386/_structs.h" 3 4
struct __darwin_mcontext64
{
 struct __darwin_x86_exception_state64 __es;
 struct __darwin_x86_thread_state64 __ss;
 struct __darwin_x86_float_state64 __fs;
};


struct __darwin_mcontext_avx64
{
 struct __darwin_x86_exception_state64 __es;
 struct __darwin_x86_thread_state64 __ss;
 struct __darwin_x86_avx_state64 __fs;
};
# 127 "/usr/include/i386/_structs.h" 3 4
typedef struct __darwin_mcontext64 *mcontext_t;
# 30 "/usr/include/machine/_structs.h" 2 3 4
# 58 "/usr/include/sys/_structs.h" 2 3 4
# 75 "/usr/include/sys/_structs.h" 3 4
struct __darwin_sigaltstack
{
 void *ss_sp;
 __darwin_size_t ss_size;
 int ss_flags;
};
# 128 "/usr/include/sys/_structs.h" 3 4
struct __darwin_ucontext
{
 int uc_onstack;
 __darwin_sigset_t uc_sigmask;
 struct __darwin_sigaltstack uc_stack;
 struct __darwin_ucontext *uc_link;
 __darwin_size_t uc_mcsize;
 struct __darwin_mcontext64 *uc_mcontext;



};
# 218 "/usr/include/sys/_structs.h" 3 4
typedef struct __darwin_sigaltstack stack_t;
# 227 "/usr/include/sys/_structs.h" 3 4
typedef struct __darwin_ucontext ucontext_t;
# 149 "/usr/include/sys/signal.h" 2 3 4








typedef __darwin_pthread_attr_t pthread_attr_t;




typedef __darwin_sigset_t sigset_t;
# 172 "/usr/include/sys/signal.h" 3 4
typedef __darwin_uid_t uid_t;


union sigval {

 int sival_int;
 void *sival_ptr;
};





struct sigevent {
 int sigev_notify;
 int sigev_signo;
 union sigval sigev_value;
 void (*sigev_notify_function)(union sigval);
 pthread_attr_t *sigev_notify_attributes;
};


typedef struct __siginfo {
 int si_signo;
 int si_errno;
 int si_code;
 pid_t si_pid;
 uid_t si_uid;
 int si_status;
 void *si_addr;
 union sigval si_value;
 long si_band;
 unsigned long __pad[7];
} siginfo_t;
# 286 "/usr/include/sys/signal.h" 3 4
union __sigaction_u {
 void (*__sa_handler)(int);
 void (*__sa_sigaction)(int, struct __siginfo *,
         void *);
};


struct __sigaction {
 union __sigaction_u __sigaction_u;
 void (*sa_tramp)(void *, int, int, siginfo_t *, void *);
 sigset_t sa_mask;
 int sa_flags;
};




struct sigaction {
 union __sigaction_u __sigaction_u;
 sigset_t sa_mask;
 int sa_flags;
};
# 348 "/usr/include/sys/signal.h" 3 4
typedef void (*sig_t)(int);
# 365 "/usr/include/sys/signal.h" 3 4
struct sigvec {
 void (*sv_handler)(int);
 int sv_mask;
 int sv_flags;
};
# 384 "/usr/include/sys/signal.h" 3 4
struct sigstack {
 char *ss_sp;
 int ss_onstack;
};
# 407 "/usr/include/sys/signal.h" 3 4
void (*signal(int, void (*)(int)))(int);
# 117 "/usr/include/sys/wait.h" 2 3 4
# 1 "/usr/include/sys/resource.h" 1 3 4
# 77 "/usr/include/sys/resource.h" 3 4
# 1 "/usr/include/sys/_structs.h" 1 3 4
# 100 "/usr/include/sys/_structs.h" 3 4
struct timeval
{
 __darwin_time_t tv_sec;
 __darwin_suseconds_t tv_usec;
};
# 78 "/usr/include/sys/resource.h" 2 3 4
# 89 "/usr/include/sys/resource.h" 3 4
typedef __uint64_t rlim_t;
# 151 "/usr/include/sys/resource.h" 3 4
struct rusage {
 struct timeval ru_utime;
 struct timeval ru_stime;
# 162 "/usr/include/sys/resource.h" 3 4
 long ru_maxrss;

 long ru_ixrss;
 long ru_idrss;
 long ru_isrss;
 long ru_minflt;
 long ru_majflt;
 long ru_nswap;
 long ru_inblock;
 long ru_oublock;
 long ru_msgsnd;
 long ru_msgrcv;
 long ru_nsignals;
 long ru_nvcsw;
 long ru_nivcsw;


};
# 222 "/usr/include/sys/resource.h" 3 4
struct rlimit {
 rlim_t rlim_cur;
 rlim_t rlim_max;
};
# 246 "/usr/include/sys/resource.h" 3 4
int getpriority(int, id_t);

int getiopolicy_np(int, int) __attribute__((availability(macosx,introduced=10.5)));

int getrlimit(int, struct rlimit *) __asm("_" "getrlimit" );
int getrusage(int, struct rusage *);
int setpriority(int, id_t, int);

int setiopolicy_np(int, int, int) __attribute__((availability(macosx,introduced=10.5)));

int setrlimit(int, const struct rlimit *) __asm("_" "setrlimit" );
# 118 "/usr/include/sys/wait.h" 2 3 4
# 193 "/usr/include/sys/wait.h" 3 4
# 1 "/usr/include/machine/endian.h" 1 3 4
# 35 "/usr/include/machine/endian.h" 3 4
# 1 "/usr/include/i386/endian.h" 1 3 4
# 99 "/usr/include/i386/endian.h" 3 4
# 1 "/usr/include/sys/_endian.h" 1 3 4
# 124 "/usr/include/sys/_endian.h" 3 4
# 1 "/usr/include/libkern/_OSByteOrder.h" 1 3 4
# 66 "/usr/include/libkern/_OSByteOrder.h" 3 4
# 1 "/usr/include/libkern/i386/_OSByteOrder.h" 1 3 4
# 44 "/usr/include/libkern/i386/_OSByteOrder.h" 3 4
static inline
__uint16_t
_OSSwapInt16(
    __uint16_t _data
)
{
    return ((_data << 8) | (_data >> 8));
}

static inline
__uint32_t
_OSSwapInt32(
    __uint32_t _data
)
{

    return __builtin_bswap32(_data);




}


static inline
__uint64_t
_OSSwapInt64(
    __uint64_t _data
)
{
    return __builtin_bswap64(_data);
}
# 67 "/usr/include/libkern/_OSByteOrder.h" 2 3 4
# 125 "/usr/include/sys/_endian.h" 2 3 4
# 100 "/usr/include/i386/endian.h" 2 3 4
# 36 "/usr/include/machine/endian.h" 2 3 4
# 194 "/usr/include/sys/wait.h" 2 3 4







union wait {
 int w_status;



 struct {

  unsigned int w_Termsig:7,
    w_Coredump:1,
    w_Retcode:8,
    w_Filler:16;







 } w_T;





 struct {

  unsigned int w_Stopval:8,
    w_Stopsig:8,
    w_Filler:16;






 } w_S;
};
# 255 "/usr/include/sys/wait.h" 3 4
pid_t wait(int *) __asm("_" "wait" );
pid_t waitpid(pid_t, int *, int) __asm("_" "waitpid" );

int waitid(idtype_t, id_t, siginfo_t *, int) __asm("_" "waitid" );


pid_t wait3(int *, int, struct rusage *);
pid_t wait4(pid_t, int *, int, struct rusage *);
# 66 "/usr/include/stdlib.h" 2 3 4

# 1 "/usr/include/alloca.h" 1 3 4
# 36 "/usr/include/alloca.h" 3 4
void *alloca(size_t);
# 68 "/usr/include/stdlib.h" 2 3 4
# 81 "/usr/include/stdlib.h" 3 4
typedef __darwin_ct_rune_t ct_rune_t;




typedef __darwin_rune_t rune_t;






typedef __darwin_wchar_t wchar_t;



typedef struct {
 int quot;
 int rem;
} div_t;

typedef struct {
 long quot;
 long rem;
} ldiv_t;


typedef struct {
 long long quot;
 long long rem;
} lldiv_t;
# 134 "/usr/include/stdlib.h" 3 4
extern int __mb_cur_max;
# 145 "/usr/include/stdlib.h" 3 4
void abort(void) __attribute__((noreturn));
int abs(int) __attribute__((const));
int atexit(void (*)(void));
double atof(const char *);
int atoi(const char *);
long atol(const char *);

long long
  atoll(const char *);

void *bsearch(const void *, const void *, size_t,
     size_t, int (*)(const void *, const void *));
void *calloc(size_t, size_t);
div_t div(int, int) __attribute__((const));
void exit(int) __attribute__((noreturn));
void free(void *);
char *getenv(const char *);
long labs(long) __attribute__((const));
ldiv_t ldiv(long, long) __attribute__((const));

long long
  llabs(long long);
lldiv_t lldiv(long long, long long);

void *malloc(size_t);
int mblen(const char *, size_t);
size_t mbstowcs(wchar_t * restrict , const char * restrict, size_t);
int mbtowc(wchar_t * restrict, const char * restrict, size_t);
int posix_memalign(void **, size_t, size_t) __attribute__((availability(macosx,introduced=10.6)));
void qsort(void *, size_t, size_t,
     int (*)(const void *, const void *));
int rand(void);
void *realloc(void *, size_t);
void srand(unsigned);
double strtod(const char *, char **) __asm("_" "strtod" );
float strtof(const char *, char **) __asm("_" "strtof" );
long strtol(const char *, char **, int);
long double
  strtold(const char *, char **);

long long
  strtoll(const char *, char **, int);

unsigned long
  strtoul(const char *, char **, int);

unsigned long long
  strtoull(const char *, char **, int);

int system(const char *) __asm("_" "system" );
size_t wcstombs(char * restrict, const wchar_t * restrict, size_t);
int wctomb(char *, wchar_t);


void _Exit(int) __attribute__((noreturn));
long a64l(const char *);
double drand48(void);
char *ecvt(double, int, int *restrict, int *restrict);
double erand48(unsigned short[3]);
char *fcvt(double, int, int *restrict, int *restrict);
char *gcvt(double, int, char *);
int getsubopt(char **, char * const *, char **);
int grantpt(int);

char *initstate(unsigned, char *, size_t);



long jrand48(unsigned short[3]);
char *l64a(long);
void lcong48(unsigned short[7]);
long lrand48(void);
char *mktemp(char *);
int mkstemp(char *);
long mrand48(void);
long nrand48(unsigned short[3]);
int posix_openpt(int);
char *ptsname(int);
int putenv(char *) __asm("_" "putenv" );
long random(void);
int rand_r(unsigned *);

char *realpath(const char * restrict, char * restrict) __asm("_" "realpath" "$DARWIN_EXTSN");



unsigned short
 *seed48(unsigned short[3]);
int setenv(const char *, const char *, int) __asm("_" "setenv" );

void setkey(const char *) __asm("_" "setkey" );



char *setstate(const char *);
void srand48(long);

void srandom(unsigned);



int unlockpt(int);

int unsetenv(const char *) __asm("_" "unsetenv" );







# 1 "/usr/include/machine/types.h" 1 3 4
# 35 "/usr/include/machine/types.h" 3 4
# 1 "/usr/include/i386/types.h" 1 3 4
# 78 "/usr/include/i386/types.h" 3 4
typedef signed char int8_t;

typedef unsigned char u_int8_t;


typedef short int16_t;

typedef unsigned short u_int16_t;


typedef int int32_t;

typedef unsigned int u_int32_t;


typedef long long int64_t;

typedef unsigned long long u_int64_t;


typedef int64_t register_t;






typedef __darwin_intptr_t intptr_t;



typedef unsigned long uintptr_t;




typedef u_int64_t user_addr_t;
typedef u_int64_t user_size_t;
typedef int64_t user_ssize_t;
typedef int64_t user_long_t;
typedef u_int64_t user_ulong_t;
typedef int64_t user_time_t;
typedef int64_t user_off_t;







typedef u_int64_t syscall_arg_t;
# 36 "/usr/include/machine/types.h" 2 3 4
# 256 "/usr/include/stdlib.h" 2 3 4


typedef __darwin_dev_t dev_t;




typedef __darwin_mode_t mode_t;



u_int32_t
  arc4random(void);
void arc4random_addrandom(unsigned char * , int );
void arc4random_buf(void * , size_t ) __attribute__((availability(macosx,introduced=10.7)));
void arc4random_stir(void);
u_int32_t
  arc4random_uniform(u_int32_t ) __attribute__((availability(macosx,introduced=10.7)));

int atexit_b(void (^)(void)) __attribute__((availability(macosx,introduced=10.6)));
void *bsearch_b(const void *, const void *, size_t,
     size_t, int (^)(const void *, const void *)) __attribute__((availability(macosx,introduced=10.6)));



char *cgetcap(char *, const char *, int);
int cgetclose(void);
int cgetent(char **, char **, const char *);
int cgetfirst(char **, char **);
int cgetmatch(const char *, const char *);
int cgetnext(char **, char **);
int cgetnum(char *, const char *, long *);
int cgetset(const char *);
int cgetstr(char *, const char *, char **);
int cgetustr(char *, const char *, char **);

int daemon(int, int) __asm("_" "daemon" "$1050") __attribute__((availability(macosx,introduced=10.0,deprecated=10.5)));
char *devname(dev_t, mode_t);
char *devname_r(dev_t, mode_t, char *buf, int len);
char *getbsize(int *, long *);
int getloadavg(double [], int);
const char
 *getprogname(void);

int heapsort(void *, size_t, size_t,
     int (*)(const void *, const void *));

int heapsort_b(void *, size_t, size_t,
     int (^)(const void *, const void *)) __attribute__((availability(macosx,introduced=10.6)));

int mergesort(void *, size_t, size_t,
     int (*)(const void *, const void *));

int mergesort_b(void *, size_t, size_t,
     int (^)(const void *, const void *)) __attribute__((availability(macosx,introduced=10.6)));

void psort(void *, size_t, size_t,
     int (*)(const void *, const void *)) __attribute__((availability(macosx,introduced=10.6)));

void psort_b(void *, size_t, size_t,
     int (^)(const void *, const void *)) __attribute__((availability(macosx,introduced=10.6)));

void psort_r(void *, size_t, size_t, void *,
     int (*)(void *, const void *, const void *)) __attribute__((availability(macosx,introduced=10.6)));

void qsort_b(void *, size_t, size_t,
     int (^)(const void *, const void *)) __attribute__((availability(macosx,introduced=10.6)));

void qsort_r(void *, size_t, size_t, void *,
     int (*)(void *, const void *, const void *));
int radixsort(const unsigned char **, int, const unsigned char *,
     unsigned);
void setprogname(const char *);
int sradixsort(const unsigned char **, int, const unsigned char *,
     unsigned);
void sranddev(void);
void srandomdev(void);
void *reallocf(void *, size_t);

long long
  strtoq(const char *, char **, int);
unsigned long long
  strtouq(const char *, char **, int);

extern char *suboptarg;
void *valloc(size_t);
# 44 "packcc.c" 2
# 1 "/usr/bin/../lib/clang/5.0/include/stdarg.h" 1 3 4
# 48 "/usr/bin/../lib/clang/5.0/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 45 "packcc.c" 2
# 1 "/usr/include/string.h" 1 3 4
# 80 "/usr/include/string.h" 3 4
void *memchr(const void *, int, size_t);
int memcmp(const void *, const void *, size_t);
void *memcpy(void *, const void *, size_t);
void *memmove(void *, const void *, size_t);
void *memset(void *, int, size_t);
char *strcat(char *, const char *);
char *strchr(const char *, int);
int strcmp(const char *, const char *);
int strcoll(const char *, const char *);
char *strcpy(char *, const char *);
size_t strcspn(const char *, const char *);
char *strerror(int) __asm("_" "strerror" );
size_t strlen(const char *);
char *strncat(char *, const char *, size_t);
int strncmp(const char *, const char *, size_t);
char *strncpy(char *, const char *, size_t);
char *strpbrk(const char *, const char *);
char *strrchr(const char *, int);
size_t strspn(const char *, const char *);
char *strstr(const char *, const char *);
char *strtok(char *, const char *);
size_t strxfrm(char *, const char *, size_t);
# 114 "/usr/include/string.h" 3 4
char *strtok_r(char *, const char *, char **);
# 126 "/usr/include/string.h" 3 4
int strerror_r(int, char *, size_t);
char *strdup(const char *);
void *memccpy(void *, const void *, int, size_t);
# 140 "/usr/include/string.h" 3 4
char *stpcpy(char *, const char *);
char *stpncpy(char *, const char *, size_t) __attribute__((availability(macosx,introduced=10.7)));
char *strndup(const char *, size_t) __attribute__((availability(macosx,introduced=10.7)));
size_t strnlen(const char *, size_t) __attribute__((availability(macosx,introduced=10.7)));
char *strsignal(int sig);
# 159 "/usr/include/string.h" 3 4
void *memmem(const void *, size_t, const void *, size_t) __attribute__((availability(macosx,introduced=10.7)));
void memset_pattern4(void *, const void *, size_t) __attribute__((availability(macosx,introduced=10.5)));
void memset_pattern8(void *, const void *, size_t) __attribute__((availability(macosx,introduced=10.5)));
void memset_pattern16(void *, const void *, size_t) __attribute__((availability(macosx,introduced=10.5)));

char *strcasestr(const char *, const char *);
char *strnstr(const char *, const char *, size_t);
size_t strlcat(char *, const char *, size_t);
size_t strlcpy(char *, const char *, size_t);
void strmode(int, char *);
char *strsep(char **, const char *);


void swab(const void * restrict, void * restrict, ssize_t);








# 1 "/usr/include/strings.h" 1 3 4
# 74 "/usr/include/strings.h" 3 4
int bcmp(const void *, const void *, size_t) ;
void bcopy(const void *, void *, size_t) ;
void bzero(void *, size_t) ;
char *index(const char *, int) ;
char *rindex(const char *, int) ;


int ffs(int);
int strcasecmp(const char *, const char *);
int strncasecmp(const char *, const char *, size_t);





int ffsl(long) __attribute__((availability(macosx,introduced=10.5)));
int fls(int) __attribute__((availability(macosx,introduced=10.5)));
int flsl(long) __attribute__((availability(macosx,introduced=10.5)));



# 1 "/usr/include/string.h" 1 3 4
# 95 "/usr/include/strings.h" 2 3 4
# 181 "/usr/include/string.h" 2 3 4
# 190 "/usr/include/string.h" 3 4
# 1 "/usr/include/secure/_string.h" 1 3 4
# 58 "/usr/include/secure/_string.h" 3 4
static __inline void *
__inline_memcpy_chk (void *__dest, const void *__src, size_t __len)
{
  return __builtin___memcpy_chk (__dest, __src, __len, __builtin_object_size (__dest, 0));
}






static __inline void *
__inline_memmove_chk (void *__dest, const void *__src, size_t __len)
{
  return __builtin___memmove_chk (__dest, __src, __len, __builtin_object_size (__dest, 0));
}






static __inline void *
__inline_memset_chk (void *__dest, int __val, size_t __len)
{
  return __builtin___memset_chk (__dest, __val, __len, __builtin_object_size (__dest, 0));
}






static __inline char *
__inline_strcpy_chk (char *restrict __dest, const char *restrict __src)
{
  return __builtin___strcpy_chk (__dest, __src, __builtin_object_size (__dest, 2 > 1));
}







static __inline char *
__inline_stpcpy_chk (char *__dest, const char *__src)
{
  return __builtin___stpcpy_chk (__dest, __src, __builtin_object_size (__dest, 2 > 1));
}






static __inline char *
__inline_stpncpy_chk (char *restrict __dest, const char *restrict __src,
        size_t __len)
{
  return __builtin___stpncpy_chk (__dest, __src, __len, __builtin_object_size (__dest, 2 > 1));
}







static __inline char *
__inline_strncpy_chk (char *restrict __dest, const char *restrict __src,
        size_t __len)
{
  return __builtin___strncpy_chk (__dest, __src, __len, __builtin_object_size (__dest, 2 > 1));
}






static __inline char *
__inline_strcat_chk (char *restrict __dest, const char *restrict __src)
{
  return __builtin___strcat_chk (__dest, __src, __builtin_object_size (__dest, 2 > 1));
}







static __inline char *
__inline_strncat_chk (char *restrict __dest, const char *restrict __src,
        size_t __len)
{
  return __builtin___strncat_chk (__dest, __src, __len, __builtin_object_size (__dest, 2 > 1));
}
# 191 "/usr/include/string.h" 2 3 4
# 46 "packcc.c" 2
# 1 "/usr/include/assert.h" 1 3 4
# 76 "/usr/include/assert.h" 3 4
void __assert_rtn(const char *, const char *, int, const char *) __attribute__((noreturn));
# 47 "packcc.c" 2
# 56 "packcc.c"
# 1 "/usr/include/unistd.h" 1 3 4
# 72 "/usr/include/unistd.h" 3 4
# 1 "/usr/include/sys/unistd.h" 1 3 4
# 138 "/usr/include/sys/unistd.h" 3 4
struct accessx_descriptor {
 unsigned int ad_name_offset;
 int ad_flags;
 int ad_pad[2];
};
# 73 "/usr/include/unistd.h" 2 3 4




typedef __darwin_gid_t gid_t;
# 114 "/usr/include/unistd.h" 3 4
typedef __darwin_useconds_t useconds_t;
# 459 "/usr/include/unistd.h" 3 4
void _exit(int) __attribute__((noreturn));
int access(const char *, int);
unsigned int
  alarm(unsigned int);
int chdir(const char *);
int chown(const char *, uid_t, gid_t);

int close(int) __asm("_" "close" );

int dup(int);
int dup2(int, int);
int execl(const char *, const char *, ...);
int execle(const char *, const char *, ...);
int execlp(const char *, const char *, ...);
int execv(const char *, char * const *);
int execve(const char *, char * const *, char * const *);
int execvp(const char *, char * const *);
pid_t fork(void);
long fpathconf(int, int);
char *getcwd(char *, size_t);
gid_t getegid(void);
uid_t geteuid(void);
gid_t getgid(void);



int getgroups(int, gid_t []);

char *getlogin(void);
pid_t getpgrp(void);
pid_t getpid(void);
pid_t getppid(void);
uid_t getuid(void);
int isatty(int);
int link(const char *, const char *);
off_t lseek(int, off_t, int);
long pathconf(const char *, int);

int pause(void) __asm("_" "pause" );

int pipe(int [2]);

ssize_t read(int, void *, size_t) __asm("_" "read" );

int rmdir(const char *);
int setgid(gid_t);
int setpgid(pid_t, pid_t);
pid_t setsid(void);
int setuid(uid_t);

unsigned int
  sleep(unsigned int) __asm("_" "sleep" );

long sysconf(int);
pid_t tcgetpgrp(int);
int tcsetpgrp(int, pid_t);
char *ttyname(int);


int ttyname_r(int, char *, size_t) __asm("_" "ttyname_r" );




int unlink(const char *);

ssize_t write(int, const void *, size_t) __asm("_" "write" );
# 536 "/usr/include/unistd.h" 3 4
size_t confstr(int, char *, size_t) __asm("_" "confstr" );

int getopt(int, char * const [], const char *) __asm("_" "getopt" );

extern char *optarg;
extern int optind, opterr, optopt;
# 565 "/usr/include/unistd.h" 3 4
void *brk(const void *);
int chroot(const char *) ;


char *crypt(const char *, const char *);






void encrypt(char *, int) __asm("_" "encrypt" );



int fchdir(int);
long gethostid(void);
pid_t getpgid(pid_t);
pid_t getsid(pid_t);



int getdtablesize(void) ;
int getpagesize(void) __attribute__((const)) ;
char *getpass(const char *) ;




char *getwd(char *) ;


int lchown(const char *, uid_t, gid_t) __asm("_" "lchown" );

int lockf(int, int, off_t) __asm("_" "lockf" );

int nice(int) __asm("_" "nice" );

ssize_t pread(int, void *, size_t, off_t) __asm("_" "pread" );

ssize_t pwrite(int, const void *, size_t, off_t) __asm("_" "pwrite" );





void *sbrk(int);



pid_t setpgrp(void) __asm("_" "setpgrp" );




int setregid(gid_t, gid_t) __asm("_" "setregid" );

int setreuid(uid_t, uid_t) __asm("_" "setreuid" );

void swab(const void * restrict, void * restrict, ssize_t);
void sync(void);
int truncate(const char *, off_t);
useconds_t ualarm(useconds_t, useconds_t);
int usleep(useconds_t) __asm("_" "usleep" );
pid_t vfork(void);


int fsync(int) __asm("_" "fsync" );

int ftruncate(int, off_t);
int getlogin_r(char *, size_t);
# 648 "/usr/include/unistd.h" 3 4
int fchown(int, uid_t, gid_t);
int gethostname(char *, size_t);
ssize_t readlink(const char * restrict, char * restrict, size_t);
int setegid(gid_t);
int seteuid(uid_t);
int symlink(const char *, const char *);
# 662 "/usr/include/unistd.h" 3 4
# 1 "/usr/include/sys/select.h" 1 3 4
# 78 "/usr/include/sys/select.h" 3 4
# 1 "/usr/include/sys/_structs.h" 1 3 4
# 88 "/usr/include/sys/_structs.h" 3 4
struct timespec
{
 __darwin_time_t tv_sec;
 long tv_nsec;
};
# 184 "/usr/include/sys/_structs.h" 3 4
typedef struct fd_set {
 __int32_t fds_bits[((((1024) % ((sizeof(__int32_t) * 8))) == 0) ? ((1024) / ((sizeof(__int32_t) * 8))) : (((1024) / ((sizeof(__int32_t) * 8))) + 1))];
} fd_set;



static __inline int
__darwin_fd_isset(int _n, const struct fd_set *_p)
{
 return (_p->fds_bits[_n/(sizeof(__int32_t) * 8)] & (1<<(_n % (sizeof(__int32_t) * 8))));
}
# 79 "/usr/include/sys/select.h" 2 3 4








typedef __darwin_time_t time_t;




typedef __darwin_suseconds_t suseconds_t;
# 137 "/usr/include/sys/select.h" 3 4
int pselect(int, fd_set * restrict, fd_set * restrict,
  fd_set * restrict, const struct timespec * restrict,
  const sigset_t * restrict)




  __asm("_" "pselect" "$1050")




  ;



# 1 "/usr/include/sys/_select.h" 1 3 4
# 39 "/usr/include/sys/_select.h" 3 4
int select(int, fd_set * restrict, fd_set * restrict,
  fd_set * restrict, struct timeval * restrict)




  __asm("_" "select" "$1050")




  ;
# 153 "/usr/include/sys/select.h" 2 3 4
# 663 "/usr/include/unistd.h" 2 3 4
# 676 "/usr/include/unistd.h" 3 4
typedef __darwin_uuid_t uuid_t;



void _Exit(int) __attribute__((noreturn));
int accessx_np(const struct accessx_descriptor *, size_t, int *, uid_t);
int acct(const char *);
int add_profil(char *, size_t, unsigned long, unsigned int);
void endusershell(void);
int execvP(const char *, const char *, char * const *);
char *fflagstostr(unsigned long);
int getdomainname(char *, int);
int getgrouplist(const char *, int, int *, int *);
int gethostuuid(uuid_t, const struct timespec *) __attribute__((availability(macosx,introduced=10.5)));
mode_t getmode(const void *, mode_t);
int getpeereid(int, uid_t *, gid_t *);
int getsgroups_np(int *, uuid_t);
char *getusershell(void);
int getwgroups_np(int *, uuid_t);
int initgroups(const char *, int);
int iruserok(unsigned long, int, const char *, const char *);
int iruserok_sa(const void *, int, int, const char *, const char *);
int issetugid(void);
char *mkdtemp(char *);
int mknod(const char *, mode_t, dev_t);
int mkpath_np(const char *path, mode_t omode) __attribute__((availability(macosx,introduced=10.8)));
int mkstemp(char *);
int mkstemps(char *, int);
char *mktemp(char *);
int nfssvc(int, void *);
int profil(char *, size_t, unsigned long, unsigned int);
int pthread_setugid_np(uid_t, gid_t);
int pthread_getugid_np( uid_t *, gid_t *);
int rcmd(char **, int, const char *, const char *, const char *, int *);
int rcmd_af(char **, int, const char *, const char *, const char *, int *,
  int);
int reboot(int);
int revoke(const char *);
int rresvport(int *);
int rresvport_af(int *, int);
int ruserok(const char *, int, const char *, const char *);
int setdomainname(const char *, int);
int setgroups(int, const gid_t *);
void sethostid(long);
int sethostname(const char *, int);

void setkey(const char *) __asm("_" "setkey" );



int setlogin(const char *);
void *setmode(const char *) __asm("_" "setmode" );
int setrgid(gid_t);
int setruid(uid_t);
int setsgroups_np(int, const uuid_t);
void setusershell(void);
int setwgroups_np(int, const uuid_t);
int strtofflags(char **, unsigned long *, unsigned long *);
int swapon(const char *);
int syscall(int, ...);
int ttyslot(void);
int undelete(const char *);
int unwhiteout(const char *);
void *valloc(size_t);

extern char *suboptarg;
int getsubopt(char **, char * const *, char **);



int fgetattrlist(int,void*,void*,size_t,unsigned int) __attribute__((availability(macosx,introduced=10.6)));
int fsetattrlist(int,void*,void*,size_t,unsigned int) __attribute__((availability(macosx,introduced=10.6)));
int getattrlist(const char*,void*,void*,size_t,unsigned int) __asm("_" "getattrlist" );
int setattrlist(const char*,void*,void*,size_t,unsigned int) __asm("_" "setattrlist" );
int exchangedata(const char*,const char*,unsigned int);
int getdirentriesattr(int,void*,void*,size_t,unsigned int*,unsigned int*,unsigned int*,unsigned int);
# 763 "/usr/include/unistd.h" 3 4
struct fssearchblock;
struct searchstate;

int searchfs(const char *, struct fssearchblock *, unsigned long *, unsigned int, unsigned int, struct searchstate *);
int fsctl(const char *,unsigned long,void*,unsigned int);
int ffsctl(int,unsigned long,void*,unsigned int) __attribute__((availability(macosx,introduced=10.6)));




int fsync_volume_np(int, int) __attribute__((availability(macosx,introduced=10.8)));
int sync_volume_np(const char *, int) __attribute__((availability(macosx,introduced=10.8)));

extern int optreset;
# 57 "packcc.c" 2
# 69 "packcc.c"
typedef enum bool_tag {
    FALSE = 0,
    TRUE
} bool_t;

typedef struct char_array_tag {
    char *buf;
    int max;
    int len;
} char_array_t;

typedef enum node_type_tag {
    NODE_RULE = 0,
    NODE_REFERENCE,
    NODE_STRING,
    NODE_CHARCLASS,
    NODE_QUANTITY,
    NODE_PREDICATE,
    NODE_SEQUENCE,
    NODE_ALTERNATE,
    NODE_CAPTURE,
    NODE_EXPAND,
    NODE_ACTION,
    NODE_ERROR,
} node_type_t;

typedef struct node_tag node_t;

typedef struct node_array_tag {
    node_t **buf;
    int max;
    int len;
} node_array_t;

typedef struct node_const_array_tag {
    const node_t **buf;
    int max;
    int len;
} node_const_array_t;

typedef struct node_hash_table_tag {
    const node_t **buf;
    int max;
    int mod;
} node_hash_table_t;

typedef struct node_rule_tag {
    char *name;
    node_t *expr;
    int ref;
    node_const_array_t vars;
    node_const_array_t capts;
    node_const_array_t codes;
    int line;
    int col;
} node_rule_t;

typedef struct node_reference_tag {
    char *var;
    int index;
    char *name;
    const node_t *rule;
    int line;
    int col;
} node_reference_t;

typedef struct node_string_tag {
    char *value;
} node_string_t;

typedef struct node_charclass_tag {
    char *value;
} node_charclass_t;

typedef struct node_quantity_tag {
    int min;
    int max;
    node_t *expr;
} node_quantity_t;

typedef struct node_predicate_tag {
    bool_t neg;
    node_t *expr;
} node_predicate_t;

typedef struct node_sequence_tag {
    node_array_t nodes;
} node_sequence_t;

typedef struct node_alternate_tag {
    node_array_t nodes;
} node_alternate_t;

typedef struct node_capture_tag {
    node_t *expr;
    int index;
} node_capture_t;

typedef struct node_expand_tag {
    int index;
    int line;
    int col;
} node_expand_t;

typedef struct node_action_tag {
    char *value;
    int index;
    node_const_array_t vars;
    node_const_array_t capts;
} node_action_t;

typedef struct node_error_tag {
    node_t *expr;
    char *value;
    int index;
    node_const_array_t vars;
    node_const_array_t capts;
} node_error_t;

typedef union node_data_tag {
    node_rule_t rule;
    node_reference_t reference;
    node_string_t string;
    node_charclass_t charclass;
    node_quantity_t quantity;
    node_predicate_t predicate;
    node_sequence_t sequence;
    node_alternate_t alternate;
    node_capture_t capture;
    node_expand_t expand;
    node_action_t action;
    node_error_t error;
} node_data_t;

struct node_tag {
    node_type_t type;
    node_data_t data;
};

typedef struct context_tag {
    char *iname;
    char *sname;
    char *hname;
    FILE *ifile;
    FILE *sfile;
    FILE *hfile;
    char *hid;
    char *vtype;
    char *atype;
    char *prefix;
    bool_t debug;
    int errnum;
    int linenum;
    int linepos;
    int bufpos;
    char_array_t buffer;
    node_array_t rules;
    node_hash_table_t rulehash;
} context_t;

typedef struct generate_tag {
    FILE *stream;
    const node_t *rule;
    int label;
} generate_t;

typedef enum string_flag_tag {
    STRING_FLAG__NONE = 0,
    STRING_FLAG__NOTEMPTY = 1,
    STRING_FLAG__NOTVOID = 2,
    STRING_FLAG__IDENTIFIER = 4,
} string_flag_t;

typedef enum code_reach_tag {
    CODE_REACH__BOTH = 0,
    CODE_REACH__ALWAYS_SUCCEED = 1,
    CODE_REACH__ALWAYS_FAIL = -1
} code_reach_t;

static const char *g_cmdname = "packcc";

static int print_error(const char *format, ...) {
    int n;
    va_list a;
    __builtin_va_start(a, format);
    n = fprintf(__stderrp, "%s: ", g_cmdname) + vfprintf(__stderrp, format, a);
    __builtin_va_end(a);
    return n;
}

static FILE *fopen_rb_e(const char *path) {
    FILE *f = fopen(path, "rb");
    if (f == ((void *)0)) {
        print_error("Cannot open file '%s' to read\n", path);
        exit(2);
    }
    return f;
}

static FILE *fopen_wt_e(const char *path) {
    FILE *f = fopen(path, "wt");
    if (f == ((void *)0)) {
        print_error("Cannot open file '%s' to write\n", path);
        exit(2);
    }
    return f;
}

static void *malloc_e(size_t size) {
    void *p = malloc(size);
    if (p == ((void *)0)) {
        print_error("Out of memory\n");
        exit(3);
    }
    return p;
}

static void *realloc_e(void *ptr, size_t size) {
    void *p = realloc(ptr, size);
    if (p == ((void *)0)) {
        print_error("Out of memory\n");
        exit(3);
    }
    return p;
}

static char *strdup_e(const char *str) {
    size_t m = strlen(str);
    char *s = (char *)malloc_e(m + 1);
    ((__builtin_object_size (s, 0) != (size_t) -1) ? __builtin___memcpy_chk (s, str, m, __builtin_object_size (s, 0)) : __inline_memcpy_chk (s, str, m));
    s[m] = '\0';
    return s;
}

static char *strndup_e(const char *str, size_t len) {
    size_t m = strnlen(str, len);
    char *s = (char *)malloc_e(m + 1);
    ((__builtin_object_size (s, 0) != (size_t) -1) ? __builtin___memcpy_chk (s, str, m, __builtin_object_size (s, 0)) : __inline_memcpy_chk (s, str, m));
    s[m] = '\0';
    return s;
}

static bool_t is_filled_string(const char *str) {
    size_t i;
    for (i = 0; str[i]; i++) {
        if (
            str[i] != ' ' &&
            str[i] != '\v' &&
            str[i] != '\f' &&
            str[i] != '\t' &&
            str[i] != '\n' &&
            str[i] != '\r'
        ) return TRUE;
    }
    return FALSE;
}

static bool_t is_identifier_string(const char *str) {
    size_t i;
    if (!(
        (str[0] >= 'a' && str[0] <= 'z') ||
        (str[0] >= 'A' && str[0] <= 'Z') ||
         str[0] == '_'
    )) return FALSE;
    for (i = 1; str[i]; i++) {
        if (!(
            (str[i] >= 'a' && str[i] <= 'z') ||
            (str[i] >= 'A' && str[i] <= 'Z') ||
            (str[i] >= '0' && str[i] <= '9') ||
             str[i] == '_'
        )) return FALSE;
    }
    return TRUE;
}

static bool_t is_pointer_type(const char *str) {
    size_t n = strlen(str);
    return (n > 0 && str[n - 1] == '*') ? TRUE : FALSE;
}

static bool_t unescape_string(char *str) {
    bool_t b = TRUE;
    size_t i, j;
    for (j = 0, i = 0; str[i]; i++) {
        if (str[i] == '\\') {
            i++;
            switch (str[i]) {
            case '\0': str[j++] = '\\'; str[j] = '\0'; return FALSE;
            case '0': str[j++] = '\x00'; break;
            case 'a': str[j++] = '\x07'; break;
            case 'b': str[j++] = '\x08'; break;
            case 'f': str[j++] = '\x0c'; break;
            case 'n': str[j++] = '\x0a'; break;
            case 'r': str[j++] = '\x0d'; break;
            case 't': str[j++] = '\x09'; break;
            case 'v': str[j++] = '\x0b'; break;
            case 'x':
                if (str[i + 1] == '\0') {
                    str[j++] = '\\'; str[j++] = 'x'; str[j] = '\0'; return FALSE;
                }
                if (str[i + 2] == '\0') {
                    str[j++] = '\\'; str[j++] = 'x'; str[j++] = str[i + 1]; str[j] = '\0'; return FALSE;
                }
                {
                    char c = str[i + 1];
                    char d = str[i + 2];
                    c = (c >= '0' && c <= '9') ? c - '0' :
                        (c >= 'a' && c <= 'f') ? c - 'a' + 10 :
                        (c >= 'A' && c <= 'F') ? c - 'A' + 10 : -1;
                    d = (d >= '0' && d <= '9') ? d - '0' :
                        (d >= 'a' && d <= 'f') ? d - 'a' + 10 :
                        (d >= 'A' && d <= 'F') ? d - 'A' + 10 : -1;
                    if (c < 0 || d < 0) {
                        str[j++] = '\\'; str[j++] = 'x'; str[j++] = str[i + 1]; str[j++] = str[i + 2];
                        b = FALSE;
                    }
                    else {
                        str[j++] = (c << 4) | d;
                    }
                    i += 2;
                }
                break;
            case '\n': break;
            case '\r': if (str[i + 1] == '\n') i++; break;
            default: str[j++] = str[i];
            }
        }
        else {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
    return b;
}

static const char *escape_character(char ch, char (*buf)[5]) {
    switch (ch) {
    case '\x00': ((__builtin_object_size (*buf, 0) != (size_t) -1) ? __builtin___strncpy_chk (*buf, "\\0", 5, __builtin_object_size (*buf, 2 > 1)) : __inline_strncpy_chk (*buf, "\\0", 5)); break;
    case '\x07': ((__builtin_object_size (*buf, 0) != (size_t) -1) ? __builtin___strncpy_chk (*buf, "\\a", 5, __builtin_object_size (*buf, 2 > 1)) : __inline_strncpy_chk (*buf, "\\a", 5)); break;
    case '\x08': ((__builtin_object_size (*buf, 0) != (size_t) -1) ? __builtin___strncpy_chk (*buf, "\\b", 5, __builtin_object_size (*buf, 2 > 1)) : __inline_strncpy_chk (*buf, "\\b", 5)); break;
    case '\x0c': ((__builtin_object_size (*buf, 0) != (size_t) -1) ? __builtin___strncpy_chk (*buf, "\\f", 5, __builtin_object_size (*buf, 2 > 1)) : __inline_strncpy_chk (*buf, "\\f", 5)); break;
    case '\x0a': ((__builtin_object_size (*buf, 0) != (size_t) -1) ? __builtin___strncpy_chk (*buf, "\\n", 5, __builtin_object_size (*buf, 2 > 1)) : __inline_strncpy_chk (*buf, "\\n", 5)); break;
    case '\x0d': ((__builtin_object_size (*buf, 0) != (size_t) -1) ? __builtin___strncpy_chk (*buf, "\\r", 5, __builtin_object_size (*buf, 2 > 1)) : __inline_strncpy_chk (*buf, "\\r", 5)); break;
    case '\x09': ((__builtin_object_size (*buf, 0) != (size_t) -1) ? __builtin___strncpy_chk (*buf, "\\t", 5, __builtin_object_size (*buf, 2 > 1)) : __inline_strncpy_chk (*buf, "\\t", 5)); break;
    case '\x0b': ((__builtin_object_size (*buf, 0) != (size_t) -1) ? __builtin___strncpy_chk (*buf, "\\v", 5, __builtin_object_size (*buf, 2 > 1)) : __inline_strncpy_chk (*buf, "\\v", 5)); break;
    case '\\': ((__builtin_object_size (*buf, 0) != (size_t) -1) ? __builtin___strncpy_chk (*buf, "\\\\", 5, __builtin_object_size (*buf, 2 > 1)) : __inline_strncpy_chk (*buf, "\\\\", 5)); break;
    case '\'': ((__builtin_object_size (*buf, 0) != (size_t) -1) ? __builtin___strncpy_chk (*buf, "\\\'", 5, __builtin_object_size (*buf, 2 > 1)) : __inline_strncpy_chk (*buf, "\\\'", 5)); break;
    case '\"': ((__builtin_object_size (*buf, 0) != (size_t) -1) ? __builtin___strncpy_chk (*buf, "\\\"", 5, __builtin_object_size (*buf, 2 > 1)) : __inline_strncpy_chk (*buf, "\\\"", 5)); break;
    default:
        if (ch >= '\x20' && ch < '\x7f')
            __builtin___snprintf_chk (*buf, 5, 0, __builtin_object_size (*buf, 2 > 1), "%c", ch);
        else
            __builtin___snprintf_chk (*buf, 5, 0, __builtin_object_size (*buf, 2 > 1), "\\x%02x", (unsigned)ch);
    }
    (*buf)[4] = '\0';
    return *buf;
}

static void remove_heading_blank(char *str) {
    size_t i, j;
    for (i = 0; str[i]; i++) {
        if (
            str[i] != ' ' &&
            str[i] != '\v' &&
            str[i] != '\f' &&
            str[i] != '\t' &&
            str[i] != '\n' &&
            str[i] != '\r'
        ) break;
    }
    for (j = 0; str[i]; i++) {
        str[j++] = str[i];
    }
    str[j] = '\0';
}

static void remove_trailing_blank(char *str) {
    size_t i, j;
    for (j = 0, i = 0; str[i]; i++) {
        if (
            str[i] != ' ' &&
            str[i] != '\v' &&
            str[i] != '\f' &&
            str[i] != '\t' &&
            str[i] != '\n' &&
            str[i] != '\r'
        ) j = i + 1;
    }
    str[j] = '\0';
}

static void make_header_identifier(char *str) {
    size_t i;
    for (i = 0; str[i]; i++) {
        str[i] =
            ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= '0' && str[i] <= '9')) ? str[i] :
             (str[i] >= 'a' && str[i] <= 'z') ? str[i] - 'a' + 'A' : '_';
    }
}

static void write_characters(FILE *stream, char ch, size_t len) {
    size_t i;
    for (i = 0; i < len; i++) fputc(ch, stream);
}

static void write_text(FILE *stream, const char *ptr, size_t len) {
    size_t i;
    for (i = 0; i < len; i++) {
        if (ptr[i] == '\r') {
            if (i + 1 < len && ptr[i + 1] == '\n') i++;
            fputc('\n', stream);
        }
        else {
            fputc(ptr[i], stream);
        }
    }
}

static void write_code_block(FILE *stream, const char *ptr, size_t len, int indent) {
    size_t i;
    for (i = 0; i < len; i++) {
        if (ptr[i] == '\n') break;
        if (ptr[i] == '\r') {
            if (i + 1 < len && ptr[i + 1] == '\n') i++;
            break;
        }
    }
    if (i < len) {
        bool_t s = TRUE;
        size_t k = i + 1;
        int l = 0, m = -1;
        for (i = k; i < len; i++) {
            switch (ptr[i]) {
            case ' ':
            case '\v':
            case '\f':
                if (s) l++;
                break;
            case '\t':
                if (s) l = (l + 8) & ~7;
                break;
            case '\n':
                s = TRUE;
                l = 0;
                break;
            case '\r':
                if (i + 1 < len && ptr[i + 1] == '\n') i++;
                s = TRUE;
                l = 0;
                break;
            default:
                s = FALSE;
                m = (m >= 0 && m < l) ? m : l;
            }
        }
        for (i = 0; i < k; i++) {
            if (
                ptr[i] != ' ' &&
                ptr[i] != '\v' &&
                ptr[i] != '\f' &&
                ptr[i] != '\t' &&
                ptr[i] != '\n' &&
                ptr[i] != '\r'
            ) break;
        }
        if (i < k) {
            write_characters(stream, ' ', indent);
            write_text(stream, ptr + i, k - i);
        }
        s = TRUE;
        l = 0;
        for (i = k; i < len; i++) {
            switch (ptr[i]) {
            case ' ':
            case '\v':
            case '\f':
                if (s) l++; else fputc(ptr[i], stream);
                break;
            case '\t':
                if (s) l = (l + 8) & ~7; else fputc(ptr[i], stream);
                break;
            case '\n':
                fputc('\n', stream);
                s = TRUE;
                l = 0;
                break;
            case '\r':
                if (i + 1 < len && ptr[i + 1] == '\n') i++;
                fputc('\n', stream);
                s = TRUE;
                l = 0;
                break;
            default:
                if (s) {
                    write_characters(stream, ' ', l - m + indent);
                    s = FALSE;
                }
                fputc(ptr[i], stream);
            }
        }
        if (!s) fputc('\n', stream);
    }
    else {
        for (i = 0; i < len; i++) {
            if (
                ptr[i] != ' ' &&
                ptr[i] != '\v' &&
                ptr[i] != '\f' &&
                ptr[i] != '\t'
            ) break;
        }
        if (i < len) {
            write_characters(stream, ' ', indent);
            write_text(stream, ptr + i, len - i);
            fputc('\n', stream);
        }
    }
}

static const char *extract_filename(const char *path) {
    int i, n = strlen(path);
    for (i = n - 1; i >= 0; i--) {
        if (path[i] == '/' || path[i] == '\\' || path[i] == ':') break;
    }
    return path + i + 1;
}

static const char *extract_fileext(const char *path) {
    int i, n = strlen(path);
    for (i = n - 1; i >= 0; i--) {
        if (path[i] == '/' || path[i] == '\\' || path[i] == ':') break;
        if (path[i] == '.') return path + i;
    }
    return path + n;
}

static char *replace_fileext(const char *path, const char *ext) {
    const char *p = extract_fileext(path);
    int m = p - path;
    int n = strlen(ext);
    char *s = (char *)malloc_e(m + n + 2);
    ((__builtin_object_size (s, 0) != (size_t) -1) ? __builtin___memcpy_chk (s, path, m, __builtin_object_size (s, 0)) : __inline_memcpy_chk (s, path, m));
    s[m] = '.';
    ((__builtin_object_size (s + m + 1, 0) != (size_t) -1) ? __builtin___memcpy_chk (s + m + 1, ext, n + 1, __builtin_object_size (s + m + 1, 0)) : __inline_memcpy_chk (s + m + 1, ext, n + 1));
    return s;
}

static char *add_fileext(const char *path, const char *ext) {
    int m = strlen(path);
    int n = strlen(ext);
    char *s = (char *)malloc_e(m + n + 2);
    ((__builtin_object_size (s, 0) != (size_t) -1) ? __builtin___memcpy_chk (s, path, m, __builtin_object_size (s, 0)) : __inline_memcpy_chk (s, path, m));
    s[m] = '.';
    ((__builtin_object_size (s + m + 1, 0) != (size_t) -1) ? __builtin___memcpy_chk (s + m + 1, ext, n + 1, __builtin_object_size (s + m + 1, 0)) : __inline_memcpy_chk (s + m + 1, ext, n + 1));
    return s;
}

static int hash_string(const char *str) {
    int i, h = 0;
    for (i = 0; str[i]; i++) {
        h = h * 31 + str[i];
    }
    return h;
}

static int populate_bits(int x) {
    x |= x >> 1;
    x |= x >> 2;
    x |= x >> 4;
    x |= x >> 8;
    x |= x >> 16;
    return x;
}

static void char_array__init(char_array_t *array, int max) {
    array->len = 0;
    array->max = max;
    array->buf = (char *)malloc_e(array->max);
}

static void char_array__add(char_array_t *array, char ch) {
    if (array->max <= 0) array->max = 1;
    while (array->max <= array->len) array->max <<= 1;
    array->buf = (char *)realloc_e(array->buf, array->max);
    array->buf[array->len++] = ch;
}

static void char_array__term(char_array_t *array) {
    free(array->buf);
}

static void node_array__init(node_array_t *array, int max) {
    array->len = 0;
    array->max = max;
    array->buf = (node_t **)malloc_e(array->max * sizeof(node_t *));
}

static void node_array__add(node_array_t *array, node_t *node) {
    if (array->max <= 0) array->max = 1;
    while (array->max <= array->len) array->max <<= 1;
    array->buf = (node_t **)realloc_e(array->buf, array->max * sizeof(node_t *));
    array->buf[array->len++] = node;
}

static void destroy_node(node_t *node);

static void node_array__term(node_array_t *array) {
    int i;
    for (i = array->len - 1; i >= 0; i--) {
        destroy_node(array->buf[i]);
    }
    free(array->buf);
}

static void node_const_array__init(node_const_array_t *array, int max) {
    array->len = 0;
    array->max = max;
    array->buf = (const node_t **)malloc_e(array->max * sizeof(const node_t *));
}

static void node_const_array__add(node_const_array_t *array, const node_t *node) {
    if (array->max <= 0) array->max = 1;
    while (array->max <= array->len) array->max <<= 1;
    array->buf = (const node_t **)realloc_e((node_t **)array->buf, array->max * sizeof(const node_t *));
    array->buf[array->len++] = node;
}

static void node_const_array__clear(node_const_array_t *array) {
    array->len = 0;
}

static void node_const_array__copy(node_const_array_t *array, const node_const_array_t *src) {
    int i;
    node_const_array__clear(array);
    for (i = 0; i < src->len; i++) {
        node_const_array__add(array, src->buf[i]);
    }
}

static void node_const_array__term(node_const_array_t *array) {
    free((node_t **)array->buf);
}

static context_t *create_context(const char *iname, const char *oname, bool_t debug) {
    context_t *ctx = (context_t *)malloc_e(sizeof(context_t));
    ctx->iname = strdup_e((iname && iname[0]) ? iname : "-");
    ctx->sname = (oname && oname[0]) ? add_fileext(oname, "c") : replace_fileext(ctx->iname, "c");
    ctx->hname = (oname && oname[0]) ? add_fileext(oname, "h") : replace_fileext(ctx->iname, "h");
    ctx->ifile = (iname && iname[0]) ? fopen_rb_e(ctx->iname) : __stdinp;
    ctx->sfile = fopen_wt_e(ctx->sname);
    ctx->hfile = fopen_wt_e(ctx->hname);
    ctx->hid = strdup_e(ctx->hname); make_header_identifier(ctx->hid);
    ctx->vtype = ((void *)0);
    ctx->atype = ((void *)0);
    ctx->prefix = ((void *)0);
    ctx->debug = debug;
    ctx->errnum = 0;
    ctx->linenum = 0;
    ctx->linepos = 0;
    ctx->bufpos = 0;
    char_array__init(&ctx->buffer, 256);
    node_array__init(&ctx->rules, 2);
    ctx->rulehash.mod = 0;
    ctx->rulehash.max = 0;
    ctx->rulehash.buf = ((void *)0);
    return ctx;
}

static node_t *create_node(node_type_t type) {
    node_t *node = (node_t *)malloc_e(sizeof(node_t));
    node->type = type;
    switch (node->type) {
    case NODE_RULE:
        node->data.rule.name = ((void *)0);
        node->data.rule.expr = ((void *)0);
        node->data.rule.ref = 0;
        node_const_array__init(&node->data.rule.vars, 2);
        node_const_array__init(&node->data.rule.capts, 2);
        node_const_array__init(&node->data.rule.codes, 2);
        node->data.rule.line = -1;
        node->data.rule.col = -1;
        break;
    case NODE_REFERENCE:
        node->data.reference.var = ((void *)0);
        node->data.reference.index = -1;
        node->data.reference.name = ((void *)0);
        node->data.reference.rule = ((void *)0);
        node->data.reference.line = -1;
        node->data.reference.col = -1;
        break;
    case NODE_STRING:
        node->data.string.value = ((void *)0);
        break;
    case NODE_CHARCLASS:
        node->data.charclass.value = ((void *)0);
        break;
    case NODE_QUANTITY:
        node->data.quantity.min = node->data.quantity.max = 0;
        node->data.quantity.expr = ((void *)0);
        break;
    case NODE_PREDICATE:
        node->data.predicate.neg = FALSE;
        node->data.predicate.expr = ((void *)0);
        break;
    case NODE_SEQUENCE:
        node_array__init(&node->data.sequence.nodes, 2);
        break;
    case NODE_ALTERNATE:
        node_array__init(&node->data.alternate.nodes, 2);
        break;
    case NODE_CAPTURE:
        node->data.capture.expr = ((void *)0);
        node->data.capture.index = -1;
        break;
    case NODE_EXPAND:
        node->data.expand.index = -1;
        node->data.expand.line = -1;
        node->data.expand.col = -1;
        break;
    case NODE_ACTION:
        node->data.action.value = ((void *)0);
        node->data.action.index = -1;
        node_const_array__init(&node->data.action.vars, 2);
        node_const_array__init(&node->data.action.capts, 2);
        break;
    case NODE_ERROR:
        node->data.error.expr = ((void *)0);
        node->data.error.value = ((void *)0);
        node->data.error.index = -1;
        node_const_array__init(&node->data.error.vars, 2);
        node_const_array__init(&node->data.error.capts, 2);
        break;
    default:
        print_error("Internal error [%d]\n", 802);
        exit(-1);
    }
    return node;
}

static void destroy_node(node_t *node) {
    if (node == ((void *)0)) return;
    switch (node->type) {
    case NODE_RULE:
        node_const_array__term(&node->data.rule.codes);
        node_const_array__term(&node->data.rule.capts);
        node_const_array__term(&node->data.rule.vars);
        destroy_node(node->data.rule.expr);
        free(node->data.rule.name);
        break;
    case NODE_REFERENCE:
        free(node->data.reference.name);
        free(node->data.reference.var);
        break;
    case NODE_STRING:
        free(node->data.string.value);
        break;
    case NODE_CHARCLASS:
        free(node->data.charclass.value);
        break;
    case NODE_QUANTITY:
        destroy_node(node->data.quantity.expr);
        break;
    case NODE_PREDICATE:
        destroy_node(node->data.predicate.expr);
        break;
    case NODE_SEQUENCE:
        node_array__term(&node->data.sequence.nodes);
        break;
    case NODE_ALTERNATE:
        node_array__term(&node->data.alternate.nodes);
        break;
    case NODE_CAPTURE:
        destroy_node(node->data.capture.expr);
        break;
    case NODE_EXPAND:
        break;
    case NODE_ACTION:
        node_const_array__term(&node->data.action.capts);
        node_const_array__term(&node->data.action.vars);
        free(node->data.action.value);
        break;
    case NODE_ERROR:
        node_const_array__term(&node->data.error.capts);
        node_const_array__term(&node->data.error.vars);
        free(node->data.error.value);
        destroy_node(node->data.error.expr);
        break;
    default:
        print_error("Internal error [%d]\n", 857);
        exit(-1);
    }
    free(node);
}

static void destroy_context(context_t *ctx) {
    if (ctx == ((void *)0)) return;
    free((node_t **)ctx->rulehash.buf);
    node_array__term(&ctx->rules);
    char_array__term(&ctx->buffer);
    free(ctx->prefix);
    free(ctx->atype);
    free(ctx->vtype);
    free(ctx->hid);
    fclose(ctx->hfile); if (ctx->errnum) unlink(ctx->hname);
    fclose(ctx->sfile); if (ctx->errnum) unlink(ctx->sname);
    fclose(ctx->ifile);
    free(ctx->hname);
    free(ctx->sname);
    free(ctx->iname);
    free(ctx);
}

static void make_rulehash(context_t *ctx) {
    int i, j;
    ctx->rulehash.mod = populate_bits(ctx->rules.len * 4);
    ctx->rulehash.max = ctx->rulehash.mod + 1;
    ctx->rulehash.buf = (const node_t **)realloc_e((node_t **)ctx->rulehash.buf, ctx->rulehash.max * sizeof(const node_t *));
    for (i = 0; i < ctx->rulehash.max; i++) {
        ctx->rulehash.buf[i] = ((void *)0);
    }
    for (i = 0; i < ctx->rules.len; i++) {
        (__builtin_expect(!(ctx->rules.buf[i]->type == NODE_RULE), 0) ? __assert_rtn(__func__, "packcc.c", 890, "ctx->rules.buf[i]->type == NODE_RULE") : (void)0);
        j = hash_string(ctx->rules.buf[i]->data.rule.name) & ctx->rulehash.mod;
        while (ctx->rulehash.buf[j] != ((void *)0)) {
            if (strcmp(ctx->rules.buf[i]->data.rule.name, ctx->rulehash.buf[j]->data.rule.name) == 0) {
                (__builtin_expect(!(ctx->rules.buf[i]->data.rule.ref == 0), 0) ? __assert_rtn(__func__, "packcc.c", 894, "ctx->rules.buf[i]->data.rule.ref == 0") : (void)0);
                (__builtin_expect(!(ctx->rulehash.buf[j]->data.rule.ref == 0), 0) ? __assert_rtn(__func__, "packcc.c", 895, "ctx->rulehash.buf[j]->data.rule.ref == 0") : (void)0);
                ctx->rules.buf[i]->data.rule.ref = -1;
                goto EXCEPTION;
            }
            j = (j + 1) & ctx->rulehash.mod;
        }
        ctx->rulehash.buf[j] = ctx->rules.buf[i];

EXCEPTION:;
    }
}

static const node_t *lookup_rulehash(const context_t *ctx, const char *name) {
    int j = hash_string(name) & ctx->rulehash.mod;
    while (ctx->rulehash.buf[j] != ((void *)0) && strcmp(name, ctx->rulehash.buf[j]->data.rule.name) != 0) {
        j = (j + 1) & ctx->rulehash.mod;
    }
    return (ctx->rulehash.buf[j] != ((void *)0)) ? ctx->rulehash.buf[j] : ((void *)0);
}

static void link_references(context_t *ctx, node_t *node) {
    if (node == ((void *)0)) return;
    switch (node->type) {
    case NODE_RULE:
        print_error("Internal error [%d]\n", 919);
        exit(-1);
    case NODE_REFERENCE:
        node->data.reference.rule = lookup_rulehash(ctx, node->data.reference.name);
        if (node->data.reference.rule == ((void *)0)) {
            print_error("%s:%d:%d: No definition of rule '%s'\n",
                ctx->iname, node->data.reference.line + 1, node->data.reference.col + 1, node->data.reference.name);
            ctx->errnum++;
        }
        else {
            (__builtin_expect(!(node->data.reference.rule->type == NODE_RULE), 0) ? __assert_rtn(__func__, "packcc.c", 929, "node->data.reference.rule->type == NODE_RULE") : (void)0);
            ((node_t *)node->data.reference.rule)->data.rule.ref++;
        }
        break;
    case NODE_STRING:
        break;
    case NODE_CHARCLASS:
        break;
    case NODE_QUANTITY:
        link_references(ctx, node->data.quantity.expr);
        break;
    case NODE_PREDICATE:
        link_references(ctx, node->data.predicate.expr);
        break;
    case NODE_SEQUENCE:
        {
            int i;
            for (i = 0; i < node->data.sequence.nodes.len; i++) {
                link_references(ctx, node->data.sequence.nodes.buf[i]);
            }
        }
        break;
    case NODE_ALTERNATE:
        {
            int i;
            for (i = 0; i < node->data.alternate.nodes.len; i++) {
                link_references(ctx, node->data.alternate.nodes.buf[i]);
            }
        }
        break;
    case NODE_CAPTURE:
        link_references(ctx, node->data.capture.expr);
        break;
    case NODE_EXPAND:
        break;
    case NODE_ACTION:
        break;
    case NODE_ERROR:
        link_references(ctx, node->data.error.expr);
        break;
    default:
        print_error("Internal error [%d]\n", 970);
        exit(-1);
    }
}

static void verify_variables(context_t *ctx, node_t *node, node_const_array_t *vars) {
    node_const_array_t a;
    bool_t b = (vars == ((void *)0)) ? TRUE : FALSE;
    if (node == ((void *)0)) return;
    if (b) {
        node_const_array__init(&a, 2);
        vars = &a;
    }
    switch (node->type) {
    case NODE_RULE:
        print_error("Internal error [%d]\n", 985);
        exit(-1);
    case NODE_REFERENCE:
        if (node->data.reference.index >= 0) {
            int i;
            for (i = 0; i < vars->len; i++) {
                (__builtin_expect(!(vars->buf[i]->type == NODE_REFERENCE), 0) ? __assert_rtn(__func__, "packcc.c", 991, "vars->buf[i]->type == NODE_REFERENCE") : (void)0);
                if (node->data.reference.index == vars->buf[i]->data.reference.index) break;
            }
            if (i == vars->len) node_const_array__add(vars, node);
        }
        break;
    case NODE_STRING:
        break;
    case NODE_CHARCLASS:
        break;
    case NODE_QUANTITY:
        verify_variables(ctx, node->data.quantity.expr, vars);
        break;
    case NODE_PREDICATE:
        verify_variables(ctx, node->data.predicate.expr, vars);
        break;
    case NODE_SEQUENCE:
        {
            int i;
            for (i = 0; i < node->data.sequence.nodes.len; i++) {
                verify_variables(ctx, node->data.sequence.nodes.buf[i], vars);
            }
        }
        break;
    case NODE_ALTERNATE:
        {
            int i, j, k, m = vars->len;
            node_const_array_t v;
            node_const_array__init(&v, 2);
            node_const_array__copy(&v, vars);
            for (i = 0; i < node->data.alternate.nodes.len; i++) {
                v.len = m;
                verify_variables(ctx, node->data.alternate.nodes.buf[i], &v);
                for (j = m; j < v.len; j++) {
                    for (k = m; k < vars->len; k++) {
                        if (v.buf[j]->data.reference.index == vars->buf[k]->data.reference.index) break;
                    }
                    if (k == vars->len) node_const_array__add(vars, v.buf[j]);
                }
            }
            node_const_array__term(&v);
        }
        break;
    case NODE_CAPTURE:
        verify_variables(ctx, node->data.capture.expr, vars);
        break;
    case NODE_EXPAND:
        break;
    case NODE_ACTION:
        node_const_array__copy(&node->data.action.vars, vars);
        break;
    case NODE_ERROR:
        node_const_array__copy(&node->data.error.vars, vars);
        verify_variables(ctx, node->data.error.expr, vars);
        break;
    default:
        print_error("Internal error [%d]\n", 1047);
        exit(-1);
    }
    if (b) {
        node_const_array__term(&a);
    }
}

static void verify_captures(context_t *ctx, node_t *node, node_const_array_t *capts) {
    node_const_array_t a;
    bool_t b = (capts == ((void *)0)) ? TRUE : FALSE;
    if (node == ((void *)0)) return;
    if (b) {
        node_const_array__init(&a, 2);
        capts = &a;
    }
    switch (node->type) {
    case NODE_RULE:
        print_error("Internal error [%d]\n", 1065);
        exit(-1);
    case NODE_REFERENCE:
        break;
    case NODE_STRING:
        break;
    case NODE_CHARCLASS:
        break;
    case NODE_QUANTITY:
        verify_captures(ctx, node->data.quantity.expr, capts);
        break;
    case NODE_PREDICATE:
        verify_captures(ctx, node->data.predicate.expr, capts);
        break;
    case NODE_SEQUENCE:
        {
            int i;
            for (i = 0; i < node->data.sequence.nodes.len; i++) {
                verify_captures(ctx, node->data.sequence.nodes.buf[i], capts);
            }
        }
        break;
    case NODE_ALTERNATE:
        {
            int i, j, m = capts->len;
            node_const_array_t v;
            node_const_array__init(&v, 2);
            node_const_array__copy(&v, capts);
            for (i = 0; i < node->data.alternate.nodes.len; i++) {
                v.len = m;
                verify_captures(ctx, node->data.alternate.nodes.buf[i], &v);
                for (j = m; j < v.len; j++) {
                    node_const_array__add(capts, v.buf[j]);
                }
            }
            node_const_array__term(&v);
        }
        break;
    case NODE_CAPTURE:
        verify_captures(ctx, node->data.capture.expr, capts);
        node_const_array__add(capts, node);
        break;
    case NODE_EXPAND:
        {
            int i;
            for (i = 0; i < capts->len; i++) {
                (__builtin_expect(!(capts->buf[i]->type == NODE_CAPTURE), 0) ? __assert_rtn(__func__, "packcc.c", 1111, "capts->buf[i]->type == NODE_CAPTURE") : (void)0);
                if (node->data.expand.index == capts->buf[i]->data.capture.index) break;
            }
            if (i >= capts->len && node->data.expand.index >= 0) {
                print_error("%s:%d:%d: Capture %d not available at this position\n",
                    ctx->iname, node->data.expand.line + 1, node->data.expand.col + 1, node->data.expand.index + 1);
                ctx->errnum++;
            }
        }
        break;
    case NODE_ACTION:
        node_const_array__copy(&node->data.action.capts, capts);
        break;
    case NODE_ERROR:
        node_const_array__copy(&node->data.error.capts, capts);
        verify_captures(ctx, node->data.error.expr, capts);
        break;
    default:
        print_error("Internal error [%d]\n", 1129);
        exit(-1);
    }
    if (b) {
        node_const_array__term(&a);
    }
}

static void dump_node(context_t *ctx, const node_t *node) {
    if (node == ((void *)0)) return;
    switch (node->type) {
    case NODE_RULE:
        fprintf(__stdoutp, "Rule(name:'%s',ref:%d,vars.len:%d,capts.len:%d,codes.len:%d){\n",
            node->data.rule.name, node->data.rule.ref, node->data.rule.vars.len, node->data.rule.capts.len, node->data.rule.codes.len);
        dump_node(ctx, node->data.rule.expr);
        fprintf(__stdoutp, "}\n");
        break;
    case NODE_REFERENCE:
        fprintf(__stdoutp, "Reference(var:'%s',index:%d,name:'%s',rule:'%s')\n",
            node->data.reference.var, node->data.reference.index, node->data.reference.name,
            (node->data.reference.rule) ? node->data.reference.rule->data.rule.name : ((void *)0));
        break;
    case NODE_STRING:
        fprintf(__stdoutp, "String(value:'%s')\n", node->data.string.value);
        break;
    case NODE_CHARCLASS:
        fprintf(__stdoutp, "Charclass(value:'%s')\n", node->data.charclass.value);
        break;
    case NODE_QUANTITY:
        fprintf(__stdoutp, "Quantity(min:%d,max%d){\n", node->data.quantity.min, node->data.quantity.max);
        dump_node(ctx, node->data.quantity.expr);
        fprintf(__stdoutp, "}\n");
        break;
    case NODE_PREDICATE:
        fprintf(__stdoutp, "Predicate(neg:%d){\n", node->data.predicate.neg);
        dump_node(ctx, node->data.predicate.expr);
        fprintf(__stdoutp, "}\n");
        break;
    case NODE_SEQUENCE:
        fprintf(__stdoutp, "Sequence(max:%d,len:%d){\n", node->data.sequence.nodes.max, node->data.sequence.nodes.len);
        {
            int i;
            for (i = 0; i < node->data.sequence.nodes.len; i++) {
                dump_node(ctx, node->data.sequence.nodes.buf[i]);
            }
        }
        fprintf(__stdoutp, "}\n");
        break;
    case NODE_ALTERNATE:
        fprintf(__stdoutp, "Alternate(max:%d,len:%d){\n", node->data.alternate.nodes.max, node->data.alternate.nodes.len);
        {
            int i;
            for (i = 0; i < node->data.alternate.nodes.len; i++) {
                dump_node(ctx, node->data.alternate.nodes.buf[i]);
            }
        }
        fprintf(__stdoutp, "}\n");
        break;
    case NODE_CAPTURE:
        fprintf(__stdoutp, "Capture(index:%d){\n", node->data.capture.index);
        dump_node(ctx, node->data.capture.expr);
        fprintf(__stdoutp, "}\n");
        break;
    case NODE_EXPAND:
        fprintf(__stdoutp, "Expand(index:%d)\n", node->data.expand.index);
        break;
    case NODE_ACTION:
        fprintf(__stdoutp, "Action(index:%d,value:{%s},vars:\n", node->data.action.index, node->data.action.value);
        {
            int i;
            for (i = 0; i < node->data.action.vars.len; i++) {
                fprintf(__stdoutp, "    '%s'\n", node->data.action.vars.buf[i]->data.reference.var);
            }
            for (i = 0; i < node->data.action.capts.len; i++) {
                fprintf(__stdoutp, "    $%d\n", node->data.action.capts.buf[i]->data.capture.index + 1);
            }
        }
        fprintf(__stdoutp, ")\n");
        break;
    case NODE_ERROR:
        fprintf(__stdoutp, "Error(index:%d,value:{%s},vars:\n", node->data.error.index, node->data.error.value);
        {
            int i;
            for (i = 0; i < node->data.error.vars.len; i++) {
                fprintf(__stdoutp, "    '%s'\n", node->data.error.vars.buf[i]->data.reference.var);
            }
            for (i = 0; i < node->data.error.capts.len; i++) {
                fprintf(__stdoutp, "    $%d\n", node->data.error.capts.buf[i]->data.capture.index + 1);
            }
        }
        fprintf(__stdoutp, "){\n");
        dump_node(ctx, node->data.error.expr);
        fprintf(__stdoutp, "}\n");
        break;
    default:
        print_error("Internal error [%d]\n", 1224);
        exit(-1);
    }
}

static int refill_buffer(context_t *ctx, int num) {
    int n, c;
    n = ctx->buffer.len - ctx->bufpos;
    if (n >= num) return n;
    while (ctx->buffer.len < ctx->bufpos + num) {
        c = fgetc(ctx->ifile);
        if (c == (-1)) break;
        char_array__add(&ctx->buffer, (char)c);
    }
    return ctx->buffer.len - ctx->bufpos;
}

static void commit_buffer(context_t *ctx) {
    ctx->linepos -= ctx->bufpos;
    ((__builtin_object_size (ctx->buffer.buf, 0) != (size_t) -1) ? __builtin___memmove_chk (ctx->buffer.buf, ctx->buffer.buf + ctx->bufpos, ctx->buffer.len - ctx->bufpos, __builtin_object_size (ctx->buffer.buf, 0)) : __inline_memmove_chk (ctx->buffer.buf, ctx->buffer.buf + ctx->bufpos, ctx->buffer.len - ctx->bufpos));
    ctx->buffer.len -= ctx->bufpos;
    ctx->bufpos = 0;
}

static bool_t match_eof(context_t *ctx) {
    return (refill_buffer(ctx, 1) < 1) ? TRUE : FALSE;
}

static bool_t match_eol(context_t *ctx) {
    if (refill_buffer(ctx, 1) >= 1) {
        switch (ctx->buffer.buf[ctx->bufpos]) {
        case '\n':
            ctx->bufpos++;
            ctx->linenum++;
            ctx->linepos = ctx->bufpos;
            return TRUE;
        case '\r':
            ctx->bufpos++;
            if (refill_buffer(ctx, 1) >= 1) {
                if (ctx->buffer.buf[ctx->bufpos] == '\n') ctx->bufpos++;
            }
            ctx->linenum++;
            ctx->linepos = ctx->bufpos;
            return TRUE;
        }
    }
    return FALSE;
}

static bool_t match_character(context_t *ctx, char ch) {
    if (refill_buffer(ctx, 1) >= 1) {
        if (ctx->buffer.buf[ctx->bufpos] == ch) {
            ctx->bufpos++;
            return TRUE;
        }
    }
    return FALSE;
}

static bool_t match_character_range(context_t *ctx, char min, char max) {
    if (refill_buffer(ctx, 1) >= 1) {
        char c = ctx->buffer.buf[ctx->bufpos];
        if (c >= min && c <= max) {
            ctx->bufpos++;
            return TRUE;
        }
    }
    return FALSE;
}

static bool_t match_character_set(context_t *ctx, const char *chs) {
    if (refill_buffer(ctx, 1) >= 1) {
        char c = ctx->buffer.buf[ctx->bufpos];
        int i;
        for (i = 0; chs[i]; i++) {
            if (c == chs[i]) {
                ctx->bufpos++;
                return TRUE;
            }
        }
    }
    return FALSE;
}

static bool_t match_character_any(context_t *ctx) {
    if (refill_buffer(ctx, 1) >= 1) {
        ctx->bufpos++;
        return TRUE;
    }
    return FALSE;
}

static bool_t match_string(context_t *ctx, const char *str) {
    int n = strlen(str);
    if (refill_buffer(ctx, n) >= n) {
        if (strncmp(ctx->buffer.buf + ctx->bufpos, str, n) == 0) {
            ctx->bufpos += n;
            return TRUE;
        }
    }
    return FALSE;
}

static bool_t match_blank(context_t *ctx) {
    return match_character_set(ctx, " \t\v\f");
}

static bool_t match_section_line_(context_t *ctx, const char *head) {
    if (match_string(ctx, head)) {
        while (!match_eol(ctx) && !match_eof(ctx)) match_character_any(ctx);
        return TRUE;
    }
    return FALSE;
}

static bool_t match_section_line_continuable_(context_t *ctx, const char *head) {
    if (match_string(ctx, head)) {
        while (!match_eof(ctx)) {
            int p = ctx->bufpos;
            if (match_eol(ctx)) {
                if (ctx->buffer.buf[p - 1] != '\\') break;
            }
            else {
                match_character_any(ctx);
            }
        }
        return TRUE;
    }
    return FALSE;
}

static bool_t match_section_block_(context_t *ctx, const char *left, const char *right, const char *name) {
    int l = ctx->linenum;
    int m = ctx->bufpos - ctx->linepos;
    if (match_string(ctx, left)) {
        while (!match_string(ctx, right)) {
            if (match_eof(ctx)) {
                print_error("%s:%d:%d: Premature EOF in %s\n", ctx->iname, l + 1, m + 1, name);
                ctx->errnum++;
                break;
            }
            if (!match_eol(ctx)) match_character_any(ctx);
        }
        return TRUE;
    }
    return FALSE;
}

static bool_t match_quotation_(context_t *ctx, const char *left, const char *right, const char *name) {
    int l = ctx->linenum;
    int m = ctx->bufpos - ctx->linepos;
    if (match_string(ctx, left)) {
        while (!match_string(ctx, right)) {
            if (match_eof(ctx)) {
                print_error("%s:%d:%d: Premature EOF in %s\n", ctx->iname, l + 1, m + 1, name);
                ctx->errnum++;
                break;
            }
            if (match_character(ctx, '\\')) {
                if (!match_eol(ctx)) match_character_any(ctx);
            }
            else {
                if (match_eol(ctx)) {
                    print_error("%s:%d:%d: Premature EOL in %s\n", ctx->iname, l + 1, m + 1, name);
                    ctx->errnum++;
                    break;
                }
                match_character_any(ctx);
            }
        }
        return TRUE;
    }
    return FALSE;
}

static bool_t match_directive_c(context_t *ctx) {
    return match_section_line_continuable_(ctx, "#");
}

static bool_t match_comment(context_t *ctx) {
    return match_section_line_(ctx, "#");
}

static bool_t match_comment_c(context_t *ctx) {
    return match_section_block_(ctx, "/*", "*/", "C comment");
}

static bool_t match_comment_cxx(context_t *ctx) {
    return match_section_line_(ctx, "//");
}

static bool_t match_quotation_single(context_t *ctx) {
    return match_quotation_(ctx, "\'", "\'", "single quotation");
}

static bool_t match_quotation_double(context_t *ctx) {
    return match_quotation_(ctx, "\"", "\"", "double quotation");
}

static bool_t match_character_class(context_t *ctx) {
    return match_quotation_(ctx, "[", "]", "character class");
}

static bool_t match_spaces(context_t *ctx) {
    int n = 0;
    while (match_blank(ctx) || match_eol(ctx) || match_comment(ctx)) n++;
    return (n > 0) ? TRUE : FALSE;
}

static bool_t match_number(context_t *ctx) {
    if (match_character_range(ctx, '0', '9')) {
        while (match_character_range(ctx, '0', '9'));
        return TRUE;
    }
    return FALSE;
}

static bool_t match_identifier(context_t *ctx) {
    if (
        match_character_range(ctx, 'a', 'z') ||
        match_character_range(ctx, 'A', 'Z') ||
        match_character(ctx, '_')
    ) {
        while (
            match_character_range(ctx, 'a', 'z') ||
            match_character_range(ctx, 'A', 'Z') ||
            match_character_range(ctx, '0', '9') ||
            match_character(ctx, '_')
        );
        return TRUE;
    }
    return FALSE;
}

static bool_t match_code_block(context_t *ctx) {
    int l = ctx->linenum;
    int m = ctx->bufpos - ctx->linepos;
    if (match_character(ctx, '{')) {
        int d = 1;
        for (;;) {
            if (match_eof(ctx)) {
                print_error("%s:%d:%d: Premature EOF in code block\n", ctx->iname, l + 1, m + 1);
                ctx->errnum++;
                break;
            }
            if (
                match_directive_c(ctx) ||
                match_comment_c(ctx) ||
                match_comment_cxx(ctx) ||
                match_quotation_single(ctx) ||
                match_quotation_double(ctx)
            ) continue;
            if (match_character(ctx, '{')) {
                d++;
            }
            else if (match_character(ctx, '}')) {
                d--;
                if (d == 0) break;
            }
            else {
                if (!match_eol(ctx)) {
                    if (match_character(ctx, '$')) {
                        ctx->buffer.buf[ctx->bufpos - 1] = '_';
                    }
                    else {
                        match_character_any(ctx);
                    }
                }
            }
        }
        return TRUE;
    }
    return FALSE;
}

static bool_t match_footer_start(context_t *ctx) {
    return match_string(ctx, "%%");
}

static node_t *parse_expression(context_t *ctx, node_t *rule);

static node_t *parse_primary(context_t *ctx, node_t *rule) {
    int p = ctx->bufpos;
    int l = ctx->linenum;
    int m = ctx->bufpos - ctx->linepos;
    node_t *n_p = ((void *)0);
    if (match_identifier(ctx)) {
        int q = ctx->bufpos, r = -1, s = -1;
        match_spaces(ctx);
        if (match_character(ctx, ':')) {
            match_spaces(ctx);
            r = ctx->bufpos;
            if (!match_identifier(ctx)) goto EXCEPTION;
            s = ctx->bufpos;
            match_spaces(ctx);
        }
        if (match_string(ctx, "<-")) goto EXCEPTION;
        n_p = create_node(NODE_REFERENCE);
        if (r < 0) {
            n_p->data.reference.var = ((void *)0);
            n_p->data.reference.index = -1;
            n_p->data.reference.name = strndup_e(ctx->buffer.buf + p, q - p);
        }
        else {
            n_p->data.reference.var = strndup_e(ctx->buffer.buf + p, q - p);
            {
                int i;
                for (i = 0; i < rule->data.rule.vars.len; i++) {
                    (__builtin_expect(!(rule->data.rule.vars.buf[i]->type == NODE_REFERENCE), 0) ? __assert_rtn(__func__, "packcc.c", 1532, "rule->data.rule.vars.buf[i]->type == NODE_REFERENCE") : (void)0);
                    if (strcmp(n_p->data.reference.var, rule->data.rule.vars.buf[i]->data.reference.var) == 0) break;
                }
                if (i == rule->data.rule.vars.len) node_const_array__add(&rule->data.rule.vars, n_p);
                n_p->data.reference.index = i;
            }
            n_p->data.reference.name = strndup_e(ctx->buffer.buf + r, s - r);
        }
        n_p->data.reference.line = l;
        n_p->data.reference.col = m;
    }
    else if (match_character(ctx, '(')) {
        match_spaces(ctx);
        n_p = parse_expression(ctx, rule);
        if (n_p == ((void *)0)) goto EXCEPTION;
        if (!match_character(ctx, ')')) goto EXCEPTION;
        match_spaces(ctx);
    }
    else if (match_character(ctx, '<')) {
        match_spaces(ctx);
        n_p = create_node(NODE_CAPTURE);
        n_p->data.capture.index = rule->data.rule.capts.len;
        node_const_array__add(&rule->data.rule.capts, n_p);
        n_p->data.capture.expr = parse_expression(ctx, rule);
        if (n_p->data.capture.expr == ((void *)0) || !match_character(ctx, '>')) {
            rule->data.rule.capts.len = n_p->data.capture.index;
            goto EXCEPTION;
        }
        match_spaces(ctx);
    }
    else if (match_character(ctx, '$')) {
        int p;
        match_spaces(ctx);
        p = ctx->bufpos;
        if (match_number(ctx)) {
            int q = ctx->bufpos;
            char *s;
            match_spaces(ctx);
            n_p = create_node(NODE_EXPAND);
            s = strndup_e(ctx->buffer.buf + p, q - p);
            n_p->data.expand.index = atoi(s);
            if (n_p->data.expand.index == 0) {
                print_error("%s:%d:%d: 0 not allowed\n", ctx->iname, l + 1, m + 1);
                ctx->errnum++;
            }
            else if (s[0] == '0') {
                print_error("%s:%d:%d: 0-prefixed number not allowed\n", ctx->iname, l + 1, m + 1);
                ctx->errnum++;
            }
            free(s);
            n_p->data.expand.index--;
            n_p->data.expand.line = l;
            n_p->data.expand.col = m;
        }
        else {
            goto EXCEPTION;
        }
    }
    else if (match_character(ctx, '.')) {
        match_spaces(ctx);
        n_p = create_node(NODE_CHARCLASS);
        n_p->data.charclass.value = ((void *)0);
    }
    else if (match_character_class(ctx)) {
        int q = ctx->bufpos;
        match_spaces(ctx);
        n_p = create_node(NODE_CHARCLASS);
        n_p->data.charclass.value = strndup_e(ctx->buffer.buf + p + 1, q - p - 2);
        if (!unescape_string(n_p->data.charclass.value)) {
            print_error("%s:%d:%d: Illegal escape sequence\n", ctx->iname, l + 1, m + 1);
            ctx->errnum++;
        }
    }
    else if (match_quotation_single(ctx) || match_quotation_double(ctx)) {
        int q = ctx->bufpos;
        match_spaces(ctx);
        n_p = create_node(NODE_STRING);
        n_p->data.string.value = strndup_e(ctx->buffer.buf + p + 1, q - p - 2);
        if (!unescape_string(n_p->data.string.value)) {
            print_error("%s:%d:%d: Illegal escape sequence\n", ctx->iname, l + 1, m + 1);
            ctx->errnum++;
        }
    }
    else if (match_code_block(ctx)) {
        int q = ctx->bufpos;
        match_spaces(ctx);
        n_p = create_node(NODE_ACTION);
        n_p->data.action.value = strndup_e(ctx->buffer.buf + p + 1, q - p - 2);
        n_p->data.action.index = rule->data.rule.codes.len;
        node_const_array__add(&rule->data.rule.codes, n_p);
    }
    else {
        goto EXCEPTION;
    }
    return n_p;

EXCEPTION:;
    destroy_node(n_p);
    ctx->bufpos = p;
    ctx->linenum = l;
    ctx->linepos = p - m;
    return ((void *)0);
}

static node_t *parse_term(context_t *ctx, node_t *rule) {
    int p = ctx->bufpos;
    int l = ctx->linenum;
    int m = ctx->bufpos - ctx->linepos;
    node_t *n_p = ((void *)0);
    node_t *n_q = ((void *)0);
    node_t *n_r = ((void *)0);
    node_t *n_t = ((void *)0);
    char t = match_character(ctx, '&') ? '&' : match_character(ctx, '!') ? '!' : '\0';
    if (t) match_spaces(ctx);
    n_p = parse_primary(ctx, rule);
    if (n_p == ((void *)0)) goto EXCEPTION;
    if (match_character(ctx, '*')) {
        match_spaces(ctx);
        n_q = create_node(NODE_QUANTITY);
        n_q->data.quantity.min = 0;
        n_q->data.quantity.max = -1;
        n_q->data.quantity.expr = n_p;
    }
    else if (match_character(ctx, '+')) {
        match_spaces(ctx);
        n_q = create_node(NODE_QUANTITY);
        n_q->data.quantity.min = 1;
        n_q->data.quantity.max = -1;
        n_q->data.quantity.expr = n_p;
    }
    else if (match_character(ctx, '?')) {
        match_spaces(ctx);
        n_q = create_node(NODE_QUANTITY);
        n_q->data.quantity.min = 0;
        n_q->data.quantity.max = 1;
        n_q->data.quantity.expr = n_p;
    }
    else {
        n_q = n_p;
    }
    switch (t) {
    case '&':
        n_r = create_node(NODE_PREDICATE);
        n_r->data.predicate.neg = FALSE;
        n_r->data.predicate.expr = n_q;
        break;
    case '!':
        n_r = create_node(NODE_PREDICATE);
        n_r->data.predicate.neg = TRUE;
        n_r->data.predicate.expr = n_q;
        break;
    default:
        n_r = n_q;
    }
    if (match_character(ctx, '~')) {
        int p;
        match_spaces(ctx);
        p = ctx->bufpos;
        if (match_code_block(ctx)) {
            int q = ctx->bufpos;
            match_spaces(ctx);
            n_t = create_node(NODE_ERROR);
            n_t->data.error.expr = n_r;
            n_t->data.error.value = strndup_e(ctx->buffer.buf + p + 1, q - p -2);
            n_t->data.error.index = rule->data.rule.codes.len;
            node_const_array__add(&rule->data.rule.codes, n_t);
        }
        else {
            goto EXCEPTION;
        }
    }
    else {
        n_t = n_r;
    }
    return n_t;

EXCEPTION:;
    destroy_node(n_r);
    ctx->bufpos = p;
    ctx->linenum = l;
    ctx->linepos = p - m;
    return ((void *)0);
}

static node_t *parse_sequence(context_t *ctx, node_t *rule) {
    int p = ctx->bufpos;
    int l = ctx->linenum;
    int m = ctx->bufpos - ctx->linepos;
    node_array_t *a_t = ((void *)0);
    node_t *n_t = ((void *)0);
    node_t *n_u = ((void *)0);
    node_t *n_s = ((void *)0);
    n_t = parse_term(ctx, rule);
    if (n_t == ((void *)0)) goto EXCEPTION;
    n_u = parse_term(ctx, rule);
    if (n_u != ((void *)0)) {
        n_s = create_node(NODE_SEQUENCE);
        a_t = &n_s->data.sequence.nodes;
        node_array__add(a_t, n_t);
        node_array__add(a_t, n_u);
        while ((n_t = parse_term(ctx, rule)) != ((void *)0)) {
            node_array__add(a_t, n_t);
        }
    }
    else {
        n_s = n_t;
    }
    return n_s;

EXCEPTION:;
    ctx->bufpos = p;
    ctx->linenum = l;
    ctx->linepos = p - m;
    return ((void *)0);
}

static node_t *parse_expression(context_t *ctx, node_t *rule) {
    int p = ctx->bufpos, q;
    int l = ctx->linenum;
    int m = ctx->bufpos - ctx->linepos;
    node_array_t *a_s = ((void *)0);
    node_t *n_s = ((void *)0);
    node_t *n_e = ((void *)0);
    n_s = parse_sequence(ctx, rule);
    if (n_s == ((void *)0)) goto EXCEPTION;
    q = ctx->bufpos;
    if (match_character(ctx, '/')) {
        ctx->bufpos = q;
        n_e = create_node(NODE_ALTERNATE);
        a_s = &n_e->data.alternate.nodes;
        node_array__add(a_s, n_s);
        while (match_character(ctx, '/')) {
            match_spaces(ctx);
            n_s = parse_sequence(ctx, rule);
            if (n_s == ((void *)0)) goto EXCEPTION;
            node_array__add(a_s, n_s);
        }
    }
    else {
        n_e = n_s;
    }
    return n_e;

EXCEPTION:;
    destroy_node(n_e);
    ctx->bufpos = p;
    ctx->linenum = l;
    ctx->linepos = p - m;
    return ((void *)0);
}

static node_t *parse_rule(context_t *ctx) {
    int p = ctx->bufpos, q;
    int l = ctx->linenum;
    int m = ctx->bufpos - ctx->linepos;
    node_t *n_r = ((void *)0);
    if (!match_identifier(ctx)) goto EXCEPTION;
    q = ctx->bufpos;
    match_spaces(ctx);
    if (!match_string(ctx, "<-")) goto EXCEPTION;
    match_spaces(ctx);
    n_r = create_node(NODE_RULE);
    n_r->data.rule.expr = parse_expression(ctx, n_r);
    if (n_r->data.rule.expr == ((void *)0)) goto EXCEPTION;
    n_r->data.rule.name = strndup_e(ctx->buffer.buf + p, q - p);
    n_r->data.rule.line = l;
    n_r->data.rule.col = m;
    return n_r;

EXCEPTION:;
    destroy_node(n_r);
    ctx->bufpos = p;
    ctx->linenum = l;
    ctx->linepos = p - m;
    return ((void *)0);
}

static const char *get_value_type(context_t *ctx) {
    return (ctx->vtype && ctx->vtype[0]) ? ctx->vtype : "int";
}

static const char *get_auxil_type(context_t *ctx) {
    return (ctx->atype && ctx->atype[0]) ? ctx->atype : "void *";
}

static const char *get_prefix(context_t *ctx) {
    return (ctx->prefix && ctx->prefix[0]) ? ctx->prefix : "pcc";
}

static void dump_options(context_t *ctx) {
    fprintf(__stdoutp, "value_type:'%s'\n", get_value_type(ctx));
    fprintf(__stdoutp, "auxil_type:'%s'\n", get_auxil_type(ctx));
    fprintf(__stdoutp, "prefix:'%s'\n", get_prefix(ctx));
}

static bool_t parse_directive_include_(context_t *ctx, const char *name, FILE *output1, FILE *output2) {
    int l = ctx->linenum;
    int m = ctx->bufpos - ctx->linepos;
    if (!match_string(ctx, name)) return FALSE;
    match_spaces(ctx);
    {
        int p = ctx->bufpos;
        if (match_code_block(ctx)) {
            int q = ctx->bufpos;
            match_spaces(ctx);
            if (output1 != ((void *)0)) {
                write_code_block(output1, ctx->buffer.buf + p + 1, q - p - 2, 0);
                fputc('\n', output1);
            }
            if (output2 != ((void *)0)) {
                write_code_block(output2, ctx->buffer.buf + p + 1, q - p - 2, 0);
                fputc('\n', output2);
            }
        }
        else {
            print_error("%s:%d:%d: Illegal %s syntax\n", ctx->iname, l + 1, m + 1, name);
            ctx->errnum++;
        }
    }
    return TRUE;
}

static bool_t parse_directive_string_(context_t *ctx, const char *name, char **output, string_flag_t mode) {
    int l = ctx->linenum;
    int m = ctx->bufpos - ctx->linepos;
    if (!match_string(ctx, name)) return FALSE;
    match_spaces(ctx);
    {
        char *s = ((void *)0);
        int p = ctx->bufpos, q;
        int lv = ctx->linenum;
        int mv = ctx->bufpos - ctx->linepos;
        if (match_quotation_single(ctx) || match_quotation_double(ctx)) {
            q = ctx->bufpos;
            match_spaces(ctx);
            s = strndup_e(ctx->buffer.buf + p + 1, q - p - 2);
            if (!unescape_string(s)) {
                print_error("%s:%d:%d: Illegal escape sequence\n", ctx->iname, lv + 1, mv + 1);
                ctx->errnum++;
            }
        }
        else {
            print_error("%s:%d:%d: Illegal %s syntax\n", ctx->iname, l + 1, m + 1, name);
            ctx->errnum++;
        }
        if (s != ((void *)0)) {
            string_flag_t f = STRING_FLAG__NONE;
            bool_t b = TRUE;
            remove_heading_blank(s);
            remove_trailing_blank(s);
            (__builtin_expect(!((mode & ~7) == 0), 0) ? __assert_rtn(__func__, "packcc.c", 1882, "(mode & ~7) == 0") : (void)0);
            if ((mode & STRING_FLAG__NOTEMPTY) && !is_filled_string(s)) {
                print_error("%s:%d:%d: Empty string\n", ctx->iname, lv + 1, mv + 1);
                ctx->errnum++;
                f |= STRING_FLAG__NOTEMPTY;
            }
            if ((mode & STRING_FLAG__NOTVOID) && strcmp(s, "void") == 0) {
                print_error("%s:%d:%d: 'void' not allowed\n", ctx->iname, lv + 1, mv + 1);
                ctx->errnum++;
                f |= STRING_FLAG__NOTVOID;
            }
            if ((mode & STRING_FLAG__IDENTIFIER) && !is_identifier_string(s)) {
                if (!(f & STRING_FLAG__NOTEMPTY)) {
                    print_error("%s:%d:%d: Invalid identifier\n", ctx->iname, lv + 1, mv + 1);
                    ctx->errnum++;
                }
                f |= STRING_FLAG__IDENTIFIER;
            }
            if (*output != ((void *)0)) {
                print_error("%s:%d:%d: Multiple %s definition\n", ctx->iname, l + 1, m + 1, name);
                ctx->errnum++;
                b = FALSE;
            }
            if (f == STRING_FLAG__NONE && b) {
                *output = s;
            }
            else {
                free(s); s = ((void *)0);
            }
        }
    }
    return TRUE;
}

static bool_t parse(context_t *ctx) {
    fprintf(ctx->sfile, "/* A packrat parser generated by PackCC %s */\n\n", "1.2.0");
    fprintf(ctx->hfile, "/* A packrat parser generated by PackCC %s */\n\n", "1.2.0");
    {
        fputs(
            "#ifdef _MSC_VER\n"
            "#define _CRT_SECURE_NO_WARNINGS\n"
            "#endif /* _MSC_VER */\n"
            "#include <stdio.h>\n"
            "#include <stdlib.h>\n"
            "#include <string.h>\n"
            "\n"
            "#ifndef _MSC_VER\n"
            "#if defined __GNUC__ && defined _WIN32 /* MinGW */\n"
            "static size_t strnlen(const char *str, size_t maxlen) {\n"
            "    size_t i;\n"
            "    for (i = 0; str[i] && i < maxlen; i++);\n"
            "    return i;\n"
            "}\n"
            "#else\n"
            "#include <unistd.h> /* for strnlen() */\n"
            "#endif /* defined __GNUC__ && defined _WIN32 */ \n"
            "#endif /* _MSC_VER */\n"
            "\n",
            ctx->sfile
        );
        fprintf(
            ctx->sfile,
            "#include \"%s\"\n"
            "\n",
            ctx->hname
        );
    }
    {
        fprintf(
            ctx->hfile,
            "#ifndef PCC_INCLUDED__%s\n"
            "#define PCC_INCLUDED__%s\n"
            "\n",
            ctx->hid, ctx->hid
        );
    }
    {
        bool_t b = TRUE;
        match_spaces(ctx);
        for (;;) {
            int p, l, m;
            if (match_eof(ctx) || match_footer_start(ctx)) break;
            p = ctx->bufpos;
            l = ctx->linenum;
            m = ctx->bufpos - ctx->linepos;
            if (
                parse_directive_include_(ctx, "%source", ctx->sfile, ((void *)0)) ||
                parse_directive_include_(ctx, "%header", ctx->hfile, ((void *)0)) ||
                parse_directive_include_(ctx, "%common", ctx->sfile, ctx->hfile) ||
                parse_directive_string_(ctx, "%value", &ctx->vtype, STRING_FLAG__NOTEMPTY | STRING_FLAG__NOTVOID) ||
                parse_directive_string_(ctx, "%auxil", &ctx->atype, STRING_FLAG__NOTEMPTY | STRING_FLAG__NOTVOID) ||
                parse_directive_string_(ctx, "%prefix", &ctx->prefix, STRING_FLAG__NOTEMPTY | STRING_FLAG__IDENTIFIER)
            ) {
                b = TRUE;
            }
            else if (match_character(ctx, '%')) {
                print_error("%s:%d:%d: Invalid directive\n", ctx->iname, l + 1, m + 1);
                ctx->errnum++;
                match_identifier(ctx);
                match_spaces(ctx);
                b = TRUE;
            }
            else {
                node_t *n_r = parse_rule(ctx);
                if (n_r == ((void *)0)) {
                    if (b) {
                        print_error("%s:%d:%d: Illegal rule syntax\n", ctx->iname, l + 1, m + 1);
                        ctx->errnum++;
                        b = FALSE;
                    }
                    ctx->linenum = l;
                    ctx->linepos = p - m;
                    if (!match_identifier(ctx) && !match_spaces(ctx)) match_character_any(ctx);
                    continue;
                }
                node_array__add(&ctx->rules, n_r);
                b = TRUE;
            }
            commit_buffer(ctx);
        }
        commit_buffer(ctx);
    }
    {
        int i;
        make_rulehash(ctx);
        for (i = 0; i < ctx->rules.len; i++) {
            link_references(ctx, ctx->rules.buf[i]->data.rule.expr);
        }
        for (i = 1; i < ctx->rules.len; i++) {
            if (ctx->rules.buf[i]->data.rule.ref == 0) {
                print_error("%s:%d:%d: Never used rule '%s'\n",
                    ctx->iname, ctx->rules.buf[i]->data.rule.line + 1, ctx->rules.buf[i]->data.rule.col + 1, ctx->rules.buf[i]->data.rule.name);
                ctx->errnum++;
            }
            else if (ctx->rules.buf[i]->data.rule.ref < 0) {
                print_error("%s:%d:%d: Multiple definition of rule '%s'\n",
                    ctx->iname, ctx->rules.buf[i]->data.rule.line + 1, ctx->rules.buf[i]->data.rule.col + 1, ctx->rules.buf[i]->data.rule.name);
                ctx->errnum++;
            }
        }
    }
    {
        int i;
        for (i = 0; i < ctx->rules.len; i++) {
            verify_variables(ctx, ctx->rules.buf[i]->data.rule.expr, ((void *)0));
            verify_captures(ctx, ctx->rules.buf[i]->data.rule.expr, ((void *)0));
        }
    }
    if (ctx->debug) {
        int i;
        for (i = 0; i < ctx->rules.len; i++) {
            dump_node(ctx, ctx->rules.buf[i]);
        }
        dump_options(ctx);
    }
    return (ctx->errnum == 0) ? TRUE : FALSE;
}

static code_reach_t generate_matching_string_code(generate_t *gen, const char *value, int onfail, int indent, bool_t bare) {
    size_t n = (value != ((void *)0)) ? strlen(value) : 0;
    if (n > 0) {
        char s[5];
        if (n > 1) {
            size_t i;
            if (!bare) {
                write_characters(gen->stream, ' ', indent);
                fputs("{\n", gen->stream);
                indent += 4;
            }
            write_characters(gen->stream, ' ', indent);
            fputs("const char *s = ctx->buffer.buf + ctx->pos;\n", gen->stream);
            write_characters(gen->stream, ' ', indent);
            fputs("if (\n", gen->stream);
            write_characters(gen->stream, ' ', indent + 4);
            fprintf(gen->stream, "pcc_refill_buffer(ctx, %d) < %d ||\n", n, n);
            for (i = 0; i < n - 1; i++) {
                write_characters(gen->stream, ' ', indent + 4);
                fprintf(gen->stream, "s[%d] != '%s' ||\n", i, escape_character(value[i], &s));
            }
            write_characters(gen->stream, ' ', indent + 4);
            fprintf(gen->stream, "s[%d] != '%s'\n", i, escape_character(value[i], &s));
            write_characters(gen->stream, ' ', indent);
            fprintf(gen->stream, ") goto L%04d;\n", onfail);
            write_characters(gen->stream, ' ', indent);
            fprintf(gen->stream, "ctx->pos += %d;\n", n);
            if (!bare) {
                indent -= 4;
                write_characters(gen->stream, ' ', indent);
                fputs("}\n", gen->stream);
            }
            return CODE_REACH__BOTH;
        }
        else {
            write_characters(gen->stream, ' ', indent);
            fputs("if (\n", gen->stream);
            write_characters(gen->stream, ' ', indent + 4);
            fputs("pcc_refill_buffer(ctx, 1) < 1 ||\n", gen->stream);
            write_characters(gen->stream, ' ', indent + 4);
            fprintf(gen->stream, "ctx->buffer.buf[ctx->pos] != '%s'\n", escape_character(value[0], &s));
            write_characters(gen->stream, ' ', indent);
            fprintf(gen->stream, ") goto L%04d;\n", onfail);
            write_characters(gen->stream, ' ', indent);
            fputs("ctx->pos++;\n", gen->stream);
            return CODE_REACH__BOTH;
        }
    }
    else {

        return CODE_REACH__ALWAYS_SUCCEED;
    }
}

static code_reach_t generate_matching_charclass_code(generate_t *gen, const char *value, int onfail, int indent, bool_t bare) {
    if (value != ((void *)0)) {
        size_t n = strlen(value);
        if (n > 0) {
            char s[5], t[5];
            if (n > 1) {
                bool_t a = (value[0] == '^') ? TRUE : FALSE;
                size_t i = a ? 1 : 0;
                if (i + 1 == n) {
                    write_characters(gen->stream, ' ', indent);
                    fputs("if (\n", gen->stream);
                    write_characters(gen->stream, ' ', indent + 4);
                    fputs("pcc_refill_buffer(ctx, 1) < 1 ||\n", gen->stream);
                    write_characters(gen->stream, ' ', indent + 4);
                    fprintf(gen->stream, "ctx->buffer.buf[ctx->pos] == '%s'\n", escape_character(value[i], &s));
                    write_characters(gen->stream, ' ', indent);
                    fprintf(gen->stream, ") goto L%04d;\n", onfail);
                    write_characters(gen->stream, ' ', indent);
                    fputs("ctx->pos++;\n", gen->stream);
                    return CODE_REACH__BOTH;
                }
                else {
                    if (!bare) {
                        write_characters(gen->stream, ' ', indent);
                        fputs("{\n", gen->stream);
                        indent += 4;
                    }
                    write_characters(gen->stream, ' ', indent);
                    fputs("char c;\n", gen->stream);
                    write_characters(gen->stream, ' ', indent);
                    fprintf(gen->stream, "if (pcc_refill_buffer(ctx, 1) < 1) goto L%04d;\n", onfail);
                    write_characters(gen->stream, ' ', indent);
                    fputs("c = ctx->buffer.buf[ctx->pos];\n", gen->stream);
                    if (i + 3 == n && value[i + 1] == '-') {
                        write_characters(gen->stream, ' ', indent);
                        fprintf(gen->stream,
                            a ? "if (c >= '%s' && c <= '%s') goto L%04d;\n"
                              : "if (!(c >= '%s' && c <= '%s')) goto L%04d;\n",
                            escape_character(value[i], &s), escape_character(value[i + 2], &t), onfail);
                    }
                    else {
                        write_characters(gen->stream, ' ', indent);
                        fputs(a ? "if (\n" : "if (!(\n", gen->stream);
                        for (; i < n; i++) {
                            write_characters(gen->stream, ' ', indent + 4);
                            if (i + 2 < n && value[i + 1] == '-') {
                                fprintf(gen->stream, "(c >= '%s' && c <= '%s')%s\n",
                                    escape_character(value[i], &s), escape_character(value[i + 2], &t), (i + 3 == n) ? "" : " ||");
                                i += 2;
                            }
                            else {
                                fprintf(gen->stream, "c == '%s'%s\n",
                                    escape_character(value[i], &s), (i + 1 == n) ? "" : " ||");
                            }
                        }
                        write_characters(gen->stream, ' ', indent);
                        fprintf(gen->stream, a ? ") goto L%04d;\n" : ")) goto L%04d;\n", onfail);
                    }
                    write_characters(gen->stream, ' ', indent);
                    fputs("ctx->pos++;\n", gen->stream);
                    if (!bare) {
                        indent -= 4;
                        write_characters(gen->stream, ' ', indent);
                        fputs("}\n", gen->stream);
                    }
                    return CODE_REACH__BOTH;
                }
            }
            else {
                write_characters(gen->stream, ' ', indent);
                fputs("if (\n", gen->stream);
                write_characters(gen->stream, ' ', indent + 4);
                fputs("pcc_refill_buffer(ctx, 1) < 1 ||\n", gen->stream);
                write_characters(gen->stream, ' ', indent + 4);
                fprintf(gen->stream, "ctx->buffer.buf[ctx->pos] != '%s'\n", escape_character(value[0], &s));
                write_characters(gen->stream, ' ', indent);
                fprintf(gen->stream, ") goto L%04d;\n", onfail);
                write_characters(gen->stream, ' ', indent);
                fputs("ctx->pos++;\n", gen->stream);
                return CODE_REACH__BOTH;
            }
        }
        else {
            write_characters(gen->stream, ' ', indent);
            fprintf(gen->stream, "goto L%04d;\n", onfail);
            return CODE_REACH__ALWAYS_FAIL;
        }
    }
    else {
        write_characters(gen->stream, ' ', indent);
        fprintf(gen->stream, "if (pcc_refill_buffer(ctx, 1) < 1) goto L%04d;\n", onfail);
        write_characters(gen->stream, ' ', indent);
        fputs("ctx->pos++;\n", gen->stream);
        return CODE_REACH__BOTH;
    }
}

static code_reach_t generate_code(generate_t *gen, const node_t *node, int onfail, int indent, bool_t bare);

static code_reach_t generate_quantifying_code(generate_t *gen, const node_t *expr, int min, int max, int onfail, int indent, bool_t bare) {
    if (max > 1 || max < 0) {
        code_reach_t r;
        if (!bare) {
            write_characters(gen->stream, ' ', indent);
            fputs("{\n", gen->stream);
            indent += 4;
        }
        if (min > 0) {
            write_characters(gen->stream, ' ', indent);
            fputs("int p = ctx->pos;\n", gen->stream);
        }
        write_characters(gen->stream, ' ', indent);
        fputs("int i;\n", gen->stream);
        write_characters(gen->stream, ' ', indent);
        if (max < 0)
            fputs("for (i = 0;; i++) {\n", gen->stream);
        else
            fprintf(gen->stream, "for (i = 0; i < %d; i++) {\n", max);
        {
            int l = ++gen->label;
            r = generate_code(gen, expr, l, indent + 4, TRUE);
            write_characters(gen->stream, ' ', indent);
            fputs("}\n", gen->stream);
            if (r != CODE_REACH__ALWAYS_SUCCEED) {
                write_characters(gen->stream, ' ', indent - 4);
                fprintf(gen->stream, "L%04d:;\n", l);
            }
            else if (max < 0) {
                print_error("Warning: Infinite loop detected in generated code\n");
            }
        }
        if (min > 0) {
            write_characters(gen->stream, ' ', indent);
            fprintf(gen->stream, "if (i < %d) {\n", min);
            write_characters(gen->stream, ' ', indent + 4);
            fputs("ctx->pos = p;\n", gen->stream);
            write_characters(gen->stream, ' ', indent + 4);
            fprintf(gen->stream, "goto L%04d;\n", onfail);
            write_characters(gen->stream, ' ', indent);
            fputs("}\n", gen->stream);
        }
        if (!bare) {
            indent -= 4;
            write_characters(gen->stream, ' ', indent);
            fputs("}\n", gen->stream);
        }
        return (min > 0) ? ((r == CODE_REACH__ALWAYS_FAIL) ? CODE_REACH__ALWAYS_FAIL : CODE_REACH__BOTH) : CODE_REACH__ALWAYS_SUCCEED;
    }
    else if (max == 1) {
        if (min > 0) {
            return generate_code(gen, expr, onfail, indent, bare);
        }
        else {
            int l = ++gen->label;
            if (generate_code(gen, expr, l, indent, bare) != CODE_REACH__ALWAYS_SUCCEED) {
                write_characters(gen->stream, ' ', indent - 4);
                fprintf(gen->stream, "L%04d:;\n", l);
            }
            return CODE_REACH__ALWAYS_SUCCEED;
        }
    }
    else {

        return CODE_REACH__ALWAYS_SUCCEED;
    }
}

static code_reach_t generate_predicating_code(generate_t *gen, const node_t *expr, bool_t neg, int onfail, int indent, bool_t bare) {
    code_reach_t r;
    if (!bare) {
        write_characters(gen->stream, ' ', indent);
        fputs("{\n", gen->stream);
        indent += 4;
    }
    write_characters(gen->stream, ' ', indent);
    fputs("int p = ctx->pos;\n", gen->stream);
    if (neg) {
        int l = ++gen->label;
        r = generate_code(gen, expr, l, indent, FALSE);
        if (r != CODE_REACH__ALWAYS_FAIL) {
            write_characters(gen->stream, ' ', indent);
            fputs("ctx->pos = p;\n", gen->stream);
            write_characters(gen->stream, ' ', indent);
            fprintf(gen->stream, "goto L%04d;\n", onfail);
        }
        if (r != CODE_REACH__ALWAYS_SUCCEED) {
            write_characters(gen->stream, ' ', indent - 4);
            fprintf(gen->stream, "L%04d:;\n", l);
            write_characters(gen->stream, ' ', indent);
            fputs("ctx->pos = p;\n", gen->stream);
        }
        switch (r) {
        case CODE_REACH__ALWAYS_SUCCEED: r = CODE_REACH__ALWAYS_FAIL; break;
        case CODE_REACH__ALWAYS_FAIL: r = CODE_REACH__ALWAYS_SUCCEED; break;
        case CODE_REACH__BOTH: break;
        }
    }
    else {
        int l = ++gen->label;
        int m = ++gen->label;
        r = generate_code(gen, expr, l, indent, FALSE);
        if (r != CODE_REACH__ALWAYS_FAIL) {
            write_characters(gen->stream, ' ', indent);
            fputs("ctx->pos = p;\n", gen->stream);
        }
        if (r == CODE_REACH__BOTH) {
            write_characters(gen->stream, ' ', indent);
            fprintf(gen->stream, "goto L%04d;\n", m);
        }
        if (r != CODE_REACH__ALWAYS_SUCCEED) {
            write_characters(gen->stream, ' ', indent - 4);
            fprintf(gen->stream, "L%04d:;\n", l);
            write_characters(gen->stream, ' ', indent);
            fputs("ctx->pos = p;\n", gen->stream);
            write_characters(gen->stream, ' ', indent);
            fprintf(gen->stream, "goto L%04d;\n", onfail);
        }
        if (r == CODE_REACH__BOTH) {
            write_characters(gen->stream, ' ', indent - 4);
            fprintf(gen->stream, "L%04d:;\n", m);
        }
    }
    if (!bare) {
        indent -= 4;
        write_characters(gen->stream, ' ', indent);
        fputs("}\n", gen->stream);
    }
    return r;
}

static code_reach_t generate_sequential_code(generate_t *gen, const node_array_t *nodes, int onfail, int indent, bool_t bare) {
    bool_t b = FALSE;
    int i;
    for (i = 0; i < nodes->len; i++) {
        switch (generate_code(gen, nodes->buf[i], onfail, indent, FALSE)) {
        case CODE_REACH__ALWAYS_FAIL:
            if (i < nodes->len - 1) {
                write_characters(gen->stream, ' ', indent);
                fputs("/* unreachable codes omitted */\n", gen->stream);
            }
            return CODE_REACH__ALWAYS_FAIL;
        case CODE_REACH__ALWAYS_SUCCEED:
            break;
        default:
            b = TRUE;
        }
    }
    return b ? CODE_REACH__BOTH : CODE_REACH__ALWAYS_SUCCEED;
}

static code_reach_t generate_alternative_code(generate_t *gen, const node_array_t *nodes, int onfail, int indent, bool_t bare) {
    bool_t b = FALSE;
    int i, m = ++gen->label;
    if (!bare) {
        write_characters(gen->stream, ' ', indent);
        fputs("{\n", gen->stream);
        indent += 4;
    }
    write_characters(gen->stream, ' ', indent);
    fputs("int p = ctx->pos;\n", gen->stream);
    write_characters(gen->stream, ' ', indent);
    fputs("int n = chunk->thunks.len;\n", gen->stream);
    for (i = 0; i < nodes->len; i++) {
        bool_t c = (i < nodes->len - 1) ? TRUE : FALSE;
        int l = ++gen->label;
        switch (generate_code(gen, nodes->buf[i], l, indent, FALSE)) {
        case CODE_REACH__ALWAYS_SUCCEED:
            if (c) {
                write_characters(gen->stream, ' ', indent);
                fputs("/* unreachable codes omitted */\n", gen->stream);
            }
            if (b) {
                write_characters(gen->stream, ' ', indent - 4);
                fprintf(gen->stream, "L%04d:;\n", m);
            }
            if (!bare) {
                indent -= 4;
                write_characters(gen->stream, ' ', indent);
                fputs("}\n", gen->stream);
            }
            return CODE_REACH__ALWAYS_SUCCEED;
        case CODE_REACH__ALWAYS_FAIL:
            break;
        default:
            b = TRUE;
            write_characters(gen->stream, ' ', indent);
            fprintf(gen->stream, "goto L%04d;\n", m);
        }
        write_characters(gen->stream, ' ', indent - 4);
        fprintf(gen->stream, "L%04d:;\n", l);
        write_characters(gen->stream, ' ', indent);
        fputs("ctx->pos = p;\n", gen->stream);
        write_characters(gen->stream, ' ', indent);
        fputs("pcc_thunk_array__revert(ctx->auxil, &chunk->thunks, n);\n", gen->stream);
        if (!c) {
            write_characters(gen->stream, ' ', indent);
            fprintf(gen->stream, "goto L%04d;\n", onfail);
        }
    }
    if (b) {
        write_characters(gen->stream, ' ', indent - 4);
        fprintf(gen->stream, "L%04d:;\n", m);
    }
    if (!bare) {
        indent -= 4;
        write_characters(gen->stream, ' ', indent);
        fputs("}\n", gen->stream);
    }
    return b ? CODE_REACH__BOTH : CODE_REACH__ALWAYS_FAIL;
}

static code_reach_t generate_capturing_code(generate_t *gen, const node_t *expr, int index, int onfail, int indent, bool_t bare) {
    code_reach_t r;
    if (!bare) {
        write_characters(gen->stream, ' ', indent);
        fputs("{\n", gen->stream);
        indent += 4;
    }
    write_characters(gen->stream, ' ', indent);
    fputs("int p = ctx->pos, q;\n", gen->stream);
    r = generate_code(gen, expr, onfail, indent, FALSE);
    write_characters(gen->stream, ' ', indent);
    fputs("q = ctx->pos;\n", gen->stream);
    write_characters(gen->stream, ' ', indent);
    fprintf(gen->stream, "chunk->capts.buf[%d].range.start = p;\n", index);
    write_characters(gen->stream, ' ', indent);
    fprintf(gen->stream, "chunk->capts.buf[%d].range.end = q;\n", index);
    if (!bare) {
        indent -= 4;
        write_characters(gen->stream, ' ', indent);
        fputs("}\n", gen->stream);
    }
    return r;
}

static code_reach_t generate_expanding_code(generate_t *gen, int index, int onfail, int indent, bool_t bare) {
    if (!bare) {
        write_characters(gen->stream, ' ', indent);
        fputs("{\n", gen->stream);
        indent += 4;
    }
    write_characters(gen->stream, ' ', indent);
    fprintf(gen->stream, "int n = chunk->capts.buf[%d].range.end - chunk->capts.buf[%d].range.start;\n", index, index);
    write_characters(gen->stream, ' ', indent);
    fprintf(gen->stream, "if (pcc_refill_buffer(ctx, n) < n) goto L%04d;\n", onfail);
    write_characters(gen->stream, ' ', indent);
    fputs("if (n > 0) {\n", gen->stream);
    write_characters(gen->stream, ' ', indent + 4);
    fputs("const char *p = ctx->buffer.buf + ctx->pos;\n", gen->stream);
    write_characters(gen->stream, ' ', indent + 4);
    fprintf(gen->stream, "const char *q = ctx->buffer.buf + chunk->capts.buf[%d].range.start;\n", index);
    write_characters(gen->stream, ' ', indent + 4);
    fputs("int i;\n", gen->stream);
    write_characters(gen->stream, ' ', indent + 4);
    fputs("for (i = 0; i < n; i++) {\n", gen->stream);
    write_characters(gen->stream, ' ', indent + 8);
    fprintf(gen->stream, "if (p[i] != q[i]) goto L%04d;\n", onfail);
    write_characters(gen->stream, ' ', indent + 4);
    fputs("}\n", gen->stream);
    write_characters(gen->stream, ' ', indent + 4);
    fputs("ctx->pos += n;\n", gen->stream);
    write_characters(gen->stream, ' ', indent);
    fputs("}\n", gen->stream);
    if (!bare) {
        indent -= 4;
        write_characters(gen->stream, ' ', indent);
        fputs("}\n", gen->stream);
    }
    return CODE_REACH__BOTH;
}

code_reach_t generate_thunking_action_code(
    generate_t *gen, int index, const node_const_array_t *vars, const node_const_array_t *capts, bool_t error, int onfail, int indent, bool_t bare
) {
    (__builtin_expect(!(gen->rule->type == NODE_RULE), 0) ? __assert_rtn(__func__, "packcc.c", 2468, "gen->rule->type == NODE_RULE") : (void)0);
    if (!bare) {
        write_characters(gen->stream, ' ', indent);
        fputs("{\n", gen->stream);
        indent += 4;
    }
    if (error) {
        write_characters(gen->stream, ' ', indent);
        fputs("pcc_value_t null;\n", gen->stream);
    }
    write_characters(gen->stream, ' ', indent);
    fprintf(gen->stream, "pcc_thunk_t *thunk = pcc_thunk__create_leaf(ctx->auxil, pcc_action_%s_%d, %d, %d);\n",
        gen->rule->data.rule.name, index, gen->rule->data.rule.vars.len, gen->rule->data.rule.capts.len);
    {
        int i;
        for (i = 0; i < vars->len; i++) {
            (__builtin_expect(!(vars->buf[i]->type == NODE_REFERENCE), 0) ? __assert_rtn(__func__, "packcc.c", 2484, "vars->buf[i]->type == NODE_REFERENCE") : (void)0);
            write_characters(gen->stream, ' ', indent);
            fprintf(gen->stream, "thunk->data.leaf.values.buf[%d] = &(chunk->values.buf[%d]);\n",
                vars->buf[i]->data.reference.index, vars->buf[i]->data.reference.index);
        }
        for (i = 0; i < capts->len; i++) {
            (__builtin_expect(!(capts->buf[i]->type == NODE_CAPTURE), 0) ? __assert_rtn(__func__, "packcc.c", 2490, "capts->buf[i]->type == NODE_CAPTURE") : (void)0);
            write_characters(gen->stream, ' ', indent);
            fprintf(gen->stream, "thunk->data.leaf.capts.buf[%d] = &(chunk->capts.buf[%d]);\n",
                capts->buf[i]->data.capture.index, capts->buf[i]->data.capture.index);
        }
        write_characters(gen->stream, ' ', indent);
        fputs("thunk->data.leaf.capt0.range.start = chunk->pos;\n", gen->stream);
        write_characters(gen->stream, ' ', indent);
        fputs("thunk->data.leaf.capt0.range.end = ctx->pos;\n", gen->stream);
    }
    if (error) {
        write_characters(gen->stream, ' ', indent);
        fputs("memset(&null, 0, sizeof(pcc_value_t)); /* in case */\n", gen->stream);
        write_characters(gen->stream, ' ', indent);
        fputs("thunk->data.leaf.action(ctx, thunk, &null);\n", gen->stream);
        write_characters(gen->stream, ' ', indent);
        fputs("pcc_thunk__destroy(ctx->auxil, thunk);\n", gen->stream);
    }
    else {
        write_characters(gen->stream, ' ', indent);
        fputs("pcc_thunk_array__add(ctx->auxil, &chunk->thunks, thunk);\n", gen->stream);
    }
    if (!bare) {
        indent -= 4;
        write_characters(gen->stream, ' ', indent);
        fputs("}\n", gen->stream);
    }
    return CODE_REACH__ALWAYS_SUCCEED;
}

code_reach_t generate_thunking_error_code(
    generate_t *gen, const node_t *expr, int index, const node_const_array_t *vars, const node_const_array_t *capts, int onfail, int indent, bool_t bare
) {
    code_reach_t r;
    int l = ++gen->label;
    int m = ++gen->label;
    (__builtin_expect(!(gen->rule->type == NODE_RULE), 0) ? __assert_rtn(__func__, "packcc.c", 2526, "gen->rule->type == NODE_RULE") : (void)0);
    if (!bare) {
        write_characters(gen->stream, ' ', indent);
        fputs("{\n", gen->stream);
        indent += 4;
    }
    r = generate_code(gen, expr, l, indent, TRUE);
    write_characters(gen->stream, ' ', indent);
    fprintf(gen->stream, "goto L%04d;\n", m);
    write_characters(gen->stream, ' ', indent - 4);
    fprintf(gen->stream, "L%04d:;\n", l);
    generate_thunking_action_code(gen, index, vars, capts, TRUE, l, indent, FALSE);
    write_characters(gen->stream, ' ', indent);
    fprintf(gen->stream, "goto L%04d;\n", onfail);
    write_characters(gen->stream, ' ', indent - 4);
    fprintf(gen->stream, "L%04d:;\n", m);
    if (!bare) {
        indent -= 4;
        write_characters(gen->stream, ' ', indent);
        fputs("}\n", gen->stream);
    }
    return r;
}

static code_reach_t generate_code(generate_t *gen, const node_t *node, int onfail, int indent, bool_t bare) {
    if (node == ((void *)0)) {
        print_error("Internal error [%d]\n", 2552);
        exit(-1);
    }
    switch (node->type) {
    case NODE_RULE:
        print_error("Internal error [%d]\n", 2557);
        exit(-1);
    case NODE_REFERENCE:
        write_characters(gen->stream, ' ', indent);
        if (node->data.reference.index >= 0) {
            fprintf(gen->stream, "if (!pcc_apply_rule(ctx, pcc_evaluate_rule_%s, &chunk->thunks, &(chunk->values.buf[%d]))) goto L%04d;\n",
                node->data.reference.name, node->data.reference.index, onfail);
        }
        else {
            fprintf(gen->stream, "if (!pcc_apply_rule(ctx, pcc_evaluate_rule_%s, &chunk->thunks, NULL)) goto L%04d;\n",
                node->data.reference.name, onfail);
        }
        return CODE_REACH__BOTH;
    case NODE_STRING:
        return generate_matching_string_code(gen, node->data.string.value, onfail, indent, bare);
    case NODE_CHARCLASS:
        return generate_matching_charclass_code(gen, node->data.charclass.value, onfail, indent, bare);
    case NODE_QUANTITY:
        return generate_quantifying_code(gen, node->data.quantity.expr, node->data.quantity.min, node->data.quantity.max, onfail, indent, bare);
    case NODE_PREDICATE:
        return generate_predicating_code(gen, node->data.predicate.expr, node->data.predicate.neg, onfail, indent, bare);
    case NODE_SEQUENCE:
        return generate_sequential_code(gen, &node->data.sequence.nodes, onfail, indent, bare);
    case NODE_ALTERNATE:
        return generate_alternative_code(gen, &node->data.alternate.nodes, onfail, indent, bare);
    case NODE_CAPTURE:
        return generate_capturing_code(gen, node->data.capture.expr, node->data.capture.index, onfail, indent, bare);
    case NODE_EXPAND:
        return generate_expanding_code(gen, node->data.expand.index, onfail, indent, bare);
    case NODE_ACTION:
        return generate_thunking_action_code(
            gen, node->data.action.index, &node->data.action.vars, &node->data.action.capts, FALSE, onfail, indent, bare
        );
    case NODE_ERROR:
        return generate_thunking_error_code(
            gen, node->data.error.expr, node->data.error.index, &node->data.error.vars, &node->data.error.capts, onfail, indent, bare
        );
    default:
        print_error("Internal error [%d]\n", 2595);
        exit(-1);
    }
}

static bool_t generate(context_t *ctx) {
    const char *vt = get_value_type(ctx);
    const char *at = get_auxil_type(ctx);
    bool_t vp = is_pointer_type(vt);
    bool_t ap = is_pointer_type(at);
    FILE *stream = ctx->sfile;
    {
        fputs(
            "#ifndef PCC_BUFFERSIZE\n"
            "#define PCC_BUFFERSIZE 256\n"
            "#endif /* PCC_BUFFERSIZE */\n"
            "\n"
            "#ifndef PCC_ARRAYSIZE\n"
            "#define PCC_ARRAYSIZE 2\n"
            "#endif /* PCC_ARRAYSIZE */\n"
            "\n"
            "typedef enum pcc_bool_tag {\n"
            "    PCC_FALSE = 0,\n"
            "    PCC_TRUE\n"
            "} pcc_bool_t;\n"
            "\n"
            "typedef struct pcc_char_array_tag {\n"
            "    char *buf;\n"
            "    int max;\n"
            "    int len;\n"
            "} pcc_char_array_t;\n"
            "\n"
            "typedef struct pcc_range_tag {\n"
            "    int start;\n"
            "    int end;\n"
            "} pcc_range_t;\n"
            "\n",
            stream
        );
        fprintf(
            stream,
            "typedef %s%spcc_value_t;\n"
            "\n",
            vt, vp ? "" : " "
        );
        fprintf(
            stream,
            "typedef %s%spcc_auxil_t;\n"
            "\n",
            at, ap ? "" : " "
        );
        fputs(
            "typedef struct pcc_value_table_tag {\n"
            "    pcc_value_t *buf;\n"
            "    int max;\n"
            "    int len;\n"
            "} pcc_value_table_t;\n"
            "\n"
            "typedef struct pcc_value_refer_table_tag {\n"
            "    pcc_value_t **buf;\n"
            "    int max;\n"
            "    int len;\n"
            "} pcc_value_refer_table_t;\n"
            "\n"
            "typedef struct pcc_capture_tag {\n"
            "    pcc_range_t range;\n"
            "    char *string; /* mutable */\n"
            "} pcc_capture_t;\n"
            "\n"
            "typedef struct pcc_capture_table_tag {\n"
            "    pcc_capture_t *buf;\n"
            "    int max;\n"
            "    int len;\n"
            "} pcc_capture_table_t;\n"
            "\n"
            "typedef struct pcc_capture_const_table_tag {\n"
            "    const pcc_capture_t **buf;\n"
            "    int max;\n"
            "    int len;\n"
            "} pcc_capture_const_table_t;\n"
            "\n"
            "typedef struct pcc_thunk_tag pcc_thunk_t;\n"
            "typedef struct pcc_thunk_array_tag pcc_thunk_array_t;\n"
            "\n",
            stream
        );
        fprintf(
            stream,
            "typedef void (*pcc_action_t)(%s_context_t *, pcc_thunk_t *, pcc_value_t *);\n"
            "\n",
            get_prefix(ctx)
        );
        fputs(
            "typedef enum pcc_thunk_type_tag {\n"
            "    PCC_THUNK_LEAF,\n"
            "    PCC_THUNK_NODE,\n"
            "} pcc_thunk_type_t;\n"
            "\n"
            "typedef struct pcc_thunk_leaf_tag {\n"
            "    pcc_value_refer_table_t values;\n"
            "    pcc_capture_const_table_t capts;\n"
            "    pcc_capture_t capt0;\n"
            "    pcc_action_t action;\n"
            "} pcc_thunk_leaf_t;\n"
            "\n"
            "typedef struct pcc_thunk_node_tag {\n"
            "    const pcc_thunk_array_t *thunks; /* just a reference */\n"
            "    pcc_value_t *value; /* just a reference */\n"
            "} pcc_thunk_node_t;\n"
            "\n"
            "typedef union pcc_thunk_data_tag {\n"
            "    pcc_thunk_leaf_t leaf;\n"
            "    pcc_thunk_node_t node;\n"
            "} pcc_thunk_data_t;\n"
            "\n"
            "struct pcc_thunk_tag {\n"
            "    pcc_thunk_type_t type;\n"
            "    pcc_thunk_data_t data;\n"
            "};\n"
            "\n"
            "struct pcc_thunk_array_tag {\n"
            "    pcc_thunk_t **buf;\n"
            "    int max;\n"
            "    int len;\n"
            "};\n"
            "\n"
            "typedef struct pcc_thunk_chunk_tag {\n"
            "    pcc_value_table_t values;\n"
            "    pcc_capture_table_t capts;\n"
            "    pcc_thunk_array_t thunks;\n"
            "    int pos;\n"
            "} pcc_thunk_chunk_t;\n"
            "\n"
            "typedef struct pcc_lr_entry_tag pcc_lr_entry_t;\n"
            "\n"
            "typedef enum pcc_lr_answer_type_tag {\n"
            "    PCC_LR_ANSWER_LR,\n"
            "    PCC_LR_ANSWER_CHUNK,\n"
            "} pcc_lr_answer_type_t;\n"
            "\n"
            "typedef union pcc_lr_answer_data_tag {\n"
            "    pcc_lr_entry_t *lr;\n"
            "    pcc_thunk_chunk_t *chunk;\n"
            "} pcc_lr_answer_data_t;\n"
            "\n"
            "typedef struct pcc_lr_answer_tag pcc_lr_answer_t;\n"
            "\n"
            "struct pcc_lr_answer_tag {\n"
            "    pcc_lr_answer_type_t type;\n"
            "    pcc_lr_answer_data_t data;\n"
            "    int pos;\n"
            "    pcc_lr_answer_t *hold;\n"
            "};\n"
            "\n",
            stream
        );
        fprintf(
            stream,
            "typedef pcc_thunk_chunk_t *(*pcc_rule_t)(%s_context_t *);\n"
            "\n",
            get_prefix(ctx)
        );
        fputs(
            "typedef struct pcc_rule_set_tag {\n"
            "    pcc_rule_t *buf;\n"
            "    int max;\n"
            "    int len;\n"
            "} pcc_rule_set_t;\n"
            "\n"
            "typedef struct pcc_lr_head_tag pcc_lr_head_t;\n"
            "\n"
            "struct pcc_lr_head_tag {\n"
            "    pcc_rule_t rule;\n"
            "    pcc_rule_set_t invol;\n"
            "    pcc_rule_set_t eval;\n"
            "    pcc_lr_head_t *hold;\n"
            "};\n"
            "\n"
            "typedef struct pcc_lr_memo_tag {\n"
            "    pcc_rule_t rule;\n"
            "    pcc_lr_answer_t *answer;\n"
            "} pcc_lr_memo_t;\n"
            "\n"
            "typedef struct pcc_lr_memo_map_tag {\n"
            "    pcc_lr_memo_t *buf;\n"
            "    int max;\n"
            "    int len;\n"
            "} pcc_lr_memo_map_t;\n"
            "\n"
            "typedef struct pcc_lr_table_entry_tag {\n"
            "    pcc_lr_head_t *head; /* just a reference */\n"
            "    pcc_lr_memo_map_t memos;\n"
            "    pcc_lr_answer_t *hold_a;\n"
            "    pcc_lr_head_t *hold_h;\n"
            "} pcc_lr_table_entry_t;\n"
            "\n"
            "typedef struct pcc_lr_table_tag {\n"
            "    pcc_lr_table_entry_t **buf;\n"
            "    int max;\n"
            "    int len;\n"
            "} pcc_lr_table_t;\n"
            "\n"
            "struct pcc_lr_entry_tag {\n"
            "    pcc_rule_t rule;\n"
            "    pcc_thunk_chunk_t *seed; /* just a reference */\n"
            "    pcc_lr_head_t *head; /* just a reference */\n"
            "};\n"
            "\n"
            "typedef struct pcc_lr_stack_tag {\n"
            "    pcc_lr_entry_t **buf;\n"
            "    int max;\n"
            "    int len;\n"
            "} pcc_lr_stack_t;\n"
            "\n",
            stream
        );
        fprintf(
            stream,
            "struct %s_context_tag {\n"
            "    int pos;\n"
            "    pcc_char_array_t buffer;\n"
            "    pcc_lr_table_t lrtable;\n"
            "    pcc_lr_stack_t lrstack;\n"
            "    pcc_auxil_t auxil;\n"
            "};\n"
            "\n",
            get_prefix(ctx)
        );
        fputs(
            "#ifndef PCC_ERROR\n"
            "#define PCC_ERROR(auxil) pcc_error()\n"
            "static void pcc_error(void) {\n"
            "    fprintf(stderr, \"Syntax error\\n\");\n"
            "    exit(1);\n"
            "}\n"
            "#endif /* PCC_ERROR */\n"
            "\n"
            "#ifndef PCC_GETCHAR\n"
            "#define PCC_GETCHAR(auxil) getchar()\n"
            "#endif /* PCC_GETCHAR */\n"
            "\n"
            "#ifndef PCC_MALLOC\n"
            "#define PCC_MALLOC(auxil, size) pcc_malloc_e(size)\n"
            "static void *pcc_malloc_e(size_t size) {\n"
            "    void *p = malloc(size);\n"
            "    if (p == NULL) {\n"
            "        fprintf(stderr, \"Out of memory\\n\");\n"
            "        exit(1);\n"
            "    }\n"
            "    return p;\n"
            "}\n"
            "#endif /* PCC_MALLOC */\n"
            "\n"
            "#ifndef PCC_REALLOC\n"
            "#define PCC_REALLOC(auxil, ptr, size) pcc_realloc_e(ptr, size)\n"
            "static void *pcc_realloc_e(void *ptr, size_t size) {\n"
            "    void *p = realloc(ptr, size);\n"
            "    if (p == NULL) {\n"
            "        fprintf(stderr, \"Out of memory\\n\");\n"
            "        exit(1);\n"
            "    }\n"
            "    return p;\n"
            "}\n"
            "#endif /* PCC_REALLOC */\n"
            "\n"
            "#ifndef PCC_FREE\n"
            "#define PCC_FREE(auxil, ptr) free(ptr)\n"
            "#endif /* PCC_FREE */\n"
            "\n"
# 2874 "packcc.c"
            "static char *pcc_strndup_e(pcc_auxil_t auxil, const char *str, size_t len) {\n"
            "    size_t m = strnlen(str, len);\n"
            "    char *s = (char *)PCC_MALLOC(auxil, m + 1);\n"
            "    memcpy(s, str, m);\n"
            "    s[m] = '\\0';\n"
            "    return s;\n"
            "}\n"
            "\n"
            "static void pcc_char_array__init(pcc_auxil_t auxil, pcc_char_array_t *array, int max) {\n"
            "    array->len = 0;\n"
            "    array->max = max;\n"
            "    array->buf = (char *)PCC_MALLOC(auxil, array->max);\n"
            "}\n"
            "\n"
            "static void pcc_char_array__add(pcc_auxil_t auxil, pcc_char_array_t *array, char ch) {\n"
            "    if (array->max <= 0) array->max = 1;\n"
            "    while (array->max <= array->len) array->max <<= 1;\n"
            "    array->buf = (char *)PCC_REALLOC(auxil, array->buf, array->max);\n"
            "    array->buf[array->len++] = ch;\n"
            "}\n"
            "\n"
            "static void pcc_char_array__term(pcc_auxil_t auxil, pcc_char_array_t *array) {\n"
            "    PCC_FREE(auxil, array->buf);\n"
            "}\n"
            "\n"
            "static void pcc_value_table__init(pcc_auxil_t auxil, pcc_value_table_t *table, int max) {\n"
            "    table->len = 0;\n"
            "    table->max = max;\n"
            "    table->buf = (pcc_value_t *)PCC_MALLOC(auxil, table->max * sizeof(pcc_value_t));\n"
            "}\n"
            "\n"
            "static void pcc_value_table__resize(pcc_auxil_t auxil, pcc_value_table_t *table, int len) {\n"
            "    if (table->max < len) {\n"
            "        if (table->max <= 0) table->max = 1;\n"
            "        while (table->max < len) table->max <<= 1;\n"
            "        table->buf = (pcc_value_t *)PCC_REALLOC(auxil, table->buf, table->max * sizeof(pcc_value_t));\n"
            "    }\n"
            "    table->len = len;\n"
            "}\n"
            "\n"
            "static void pcc_value_table__term(pcc_auxil_t auxil, pcc_value_table_t *table) {\n"
            "    PCC_FREE(auxil, table->buf);\n"
            "}\n"
            "\n"
            "static void pcc_value_refer_table__init(pcc_auxil_t auxil, pcc_value_refer_table_t *table, int max) {\n"
            "    table->len = 0;\n"
            "    table->max = max;\n"
            "    table->buf = (pcc_value_t **)PCC_MALLOC(auxil, table->max * sizeof(pcc_value_t *));\n"
            "}\n"
            "\n"
            "static void pcc_value_refer_table__resize(pcc_auxil_t auxil, pcc_value_refer_table_t *table, int len) {\n"
            "    int i;\n"
            "    if (table->max < len) {\n"
            "        if (table->max <= 0) table->max = 1;\n"
            "        while (table->max < len) table->max <<= 1;\n"
            "        table->buf = (pcc_value_t **)PCC_REALLOC(auxil, table->buf, table->max * sizeof(pcc_value_t *));\n"
            "    }\n"
            "    for (i = table->len; i < len; i++) table->buf[i] = NULL;\n"
            "    table->len = len;\n"
            "}\n"
            "\n"
            "static void pcc_value_refer_table__term(pcc_auxil_t auxil, pcc_value_refer_table_t *table) {\n"
            "    PCC_FREE(auxil, table->buf);\n"
            "}\n"
            "\n"
            "static void pcc_capture_table__init(pcc_auxil_t auxil, pcc_capture_table_t *table, int max) {\n"
            "    table->len = 0;\n"
            "    table->max = max;\n"
            "    table->buf = (pcc_capture_t *)PCC_MALLOC(auxil, table->max * sizeof(pcc_capture_t));\n"
            "}\n"
            "\n"
            "static void pcc_capture_table__resize(pcc_auxil_t auxil, pcc_capture_table_t *table, int len) {\n"
            "    int i;\n"
            "    for (i = table->len - 1; i >= len; i--) PCC_FREE(auxil, table->buf[i].string);\n"
            "    if (table->max < len) {\n"
            "        if (table->max <= 0) table->max = 1;\n"
            "        while (table->max < len) table->max <<= 1;\n"
            "        table->buf = (pcc_capture_t *)PCC_REALLOC(auxil, table->buf, table->max * sizeof(pcc_capture_t));\n"
            "    }\n"
            "    for (i = table->len; i < len; i++) {\n"
            "        table->buf[i].range.start = 0;\n"
            "        table->buf[i].range.end = 0;\n"
            "        table->buf[i].string = NULL;\n"
            "    }\n"
            "    table->len = len;\n"
            "}\n"
            "\n"
            "static void pcc_capture_table__term(pcc_auxil_t auxil, pcc_capture_table_t *table) {\n"
            "    int i;\n"
            "    for (i = table->len - 1; i >= 0; i--) PCC_FREE(auxil, table->buf[i].string);\n"
            "    PCC_FREE(auxil, table->buf);\n"
            "}\n"
            "\n"
            "static void pcc_capture_const_table__init(pcc_auxil_t auxil, pcc_capture_const_table_t *table, int max) {\n"
            "    table->len = 0;\n"
            "    table->max = max;\n"
            "    table->buf = (const pcc_capture_t **)PCC_MALLOC(auxil, table->max * sizeof(const pcc_capture_t *));\n"
            "}\n"
            "\n"
            "static void pcc_capture_const_table__resize(pcc_auxil_t auxil, pcc_capture_const_table_t *table, int len) {\n"
            "    int i;\n"
            "    if (table->max < len) {\n"
            "        if (table->max <= 0) table->max = 1;\n"
            "        while (table->max < len) table->max <<= 1;\n"
            "        table->buf = (const pcc_capture_t **)PCC_REALLOC(auxil, (pcc_capture_t **)table->buf, table->max * sizeof(const pcc_capture_t *));\n"
            "    }\n"
            "    for (i = table->len; i < len; i++) table->buf[i] = NULL;\n"
            "    table->len = len;\n"
            "}\n"
            "\n"
            "static void pcc_capture_const_table__term(pcc_auxil_t auxil, pcc_capture_const_table_t *table) {\n"
            "    PCC_FREE(auxil, (pcc_capture_t **)table->buf);\n"
            "}\n"
            "\n"
            "static pcc_thunk_t *pcc_thunk__create_leaf(pcc_auxil_t auxil, pcc_action_t action, int valuec, int captc) {\n"
            "    pcc_thunk_t *thunk = (pcc_thunk_t *)PCC_MALLOC(auxil, sizeof(pcc_thunk_t));\n"
            "    thunk->type = PCC_THUNK_LEAF;\n"
            "    pcc_value_refer_table__init(auxil, &thunk->data.leaf.values, valuec);\n"
            "    pcc_value_refer_table__resize(auxil, &thunk->data.leaf.values, valuec);\n"
            "    pcc_capture_const_table__init(auxil, &thunk->data.leaf.capts, captc);\n"
            "    pcc_capture_const_table__resize(auxil, &thunk->data.leaf.capts, captc);\n"
            "    thunk->data.leaf.capt0.range.start = 0;\n"
            "    thunk->data.leaf.capt0.range.end = 0;\n"
            "    thunk->data.leaf.capt0.string = NULL;\n"
            "    thunk->data.leaf.action = action;\n"
            "    return thunk;\n"
            "}\n"
            "\n"
            "static pcc_thunk_t *pcc_thunk__create_node(pcc_auxil_t auxil, const pcc_thunk_array_t *thunks, pcc_value_t *value) {\n"
            "    pcc_thunk_t *thunk = (pcc_thunk_t *)PCC_MALLOC(auxil, sizeof(pcc_thunk_t));\n"
            "    thunk->type = PCC_THUNK_NODE;\n"
            "    thunk->data.node.thunks = thunks;\n"
            "    thunk->data.node.value = value;\n"
            "    return thunk;\n"
            "}\n"
            "\n"
            "static void pcc_thunk__destroy(pcc_auxil_t auxil, pcc_thunk_t *thunk) {\n"
            "    if (thunk == NULL) return;\n"
            "    switch (thunk->type) {\n"
            "    case PCC_THUNK_LEAF:\n"
            "        PCC_FREE(auxil, thunk->data.leaf.capt0.string);\n"
            "        pcc_capture_const_table__term(auxil, &thunk->data.leaf.capts);\n"
            "        pcc_value_refer_table__term(auxil, &thunk->data.leaf.values);\n"
            "        break;\n"
            "    case PCC_THUNK_NODE:\n"
            "        break;\n"
            "    default: /* unknown */\n"
            "        break;\n"
            "    }\n"
            "    PCC_FREE(auxil, thunk);\n"
            "}\n"
            "\n"
            "static void pcc_thunk_array__init(pcc_auxil_t auxil, pcc_thunk_array_t *array, int max) {\n"
            "    array->len = 0;\n"
            "    array->max = max;\n"
            "    array->buf = (pcc_thunk_t **)PCC_MALLOC(auxil, array->max * sizeof(pcc_thunk_t *));\n"
            "}\n"
            "\n"
            "static void pcc_thunk_array__add(pcc_auxil_t auxil, pcc_thunk_array_t *array, pcc_thunk_t *thunk) {\n"
            "    if (array->max <= 0) array->max = 1;\n"
            "    while (array->max <= array->len) array->max <<= 1;\n"
            "    array->buf = (pcc_thunk_t **)PCC_REALLOC(auxil, array->buf, array->max * sizeof(pcc_thunk_t *));\n"
            "    array->buf[array->len++] = thunk;\n"
            "}\n"
            "\n"
            "static void pcc_thunk_array__revert(pcc_auxil_t auxil, pcc_thunk_array_t *array, int len) {\n"
            "    if (array->len > len) {\n"
            "        int i;\n"
            "        for (i = array->len - 1; i >= len; i--) pcc_thunk__destroy(auxil, array->buf[i]);\n"
            "        array->len = len;\n"
            "    }\n"
            "}\n"
            "\n"
            "static void pcc_thunk_array__term(pcc_auxil_t auxil, pcc_thunk_array_t *array) {\n"
            "    int i;\n"
            "    for (i = array->len - 1; i >= 0; i--) pcc_thunk__destroy(auxil, array->buf[i]);\n"
            "    PCC_FREE(auxil, array->buf);\n"
            "}\n"
            "\n"
            "static pcc_thunk_chunk_t *pcc_thunk_chunk__create(pcc_auxil_t auxil) {\n"
            "    pcc_thunk_chunk_t *chunk = (pcc_thunk_chunk_t *)PCC_MALLOC(auxil, sizeof(pcc_thunk_chunk_t));\n"
            "    pcc_value_table__init(auxil, &chunk->values, PCC_ARRAYSIZE);\n"
            "    pcc_capture_table__init(auxil, &chunk->capts, PCC_ARRAYSIZE);\n"
            "    pcc_thunk_array__init(auxil, &chunk->thunks, PCC_ARRAYSIZE);\n"
            "    chunk->pos = 0;\n"
            "    return chunk;\n"
            "}\n"
            "\n"
            "static void pcc_thunk_chunk__destroy(pcc_auxil_t auxil, pcc_thunk_chunk_t *chunk) {\n"
            "    if (chunk == NULL) return;\n"
            "    pcc_thunk_array__term(auxil, &chunk->thunks);\n"
            "    pcc_capture_table__term(auxil, &chunk->capts);\n"
            "    pcc_value_table__term(auxil, &chunk->values);\n"
            "    PCC_FREE(auxil, chunk);\n"
            "}\n"
            "\n"
            "static void pcc_rule_set__init(pcc_auxil_t auxil, pcc_rule_set_t *set, int max) {\n"
            "    set->len = 0;\n"
            "    set->max = max;\n"
            "    set->buf = (pcc_rule_t *)PCC_MALLOC(auxil, set->max * sizeof(pcc_rule_t));\n"
            "}\n"
            "\n"
            "static int pcc_rule_set__index(pcc_auxil_t auxil, const pcc_rule_set_t *set, pcc_rule_t rule) {\n"
            "    int i;\n"
            "    for (i = 0; i < set->len; i++) {\n"
            "        if (set->buf[i] == rule) return i;\n"
            "    }\n"
            "    return -1;\n"
            "}\n"
            "\n"
            "static pcc_bool_t pcc_rule_set__add(pcc_auxil_t auxil, pcc_rule_set_t *set, pcc_rule_t rule) {\n"
            "    int i = pcc_rule_set__index(auxil, set, rule);\n"
            "    if (i >= 0) return PCC_FALSE;\n"
            "    if (set->max <= 0) set->max = 1;\n"
            "    while (set->max <= set->len) set->max <<= 1;\n"
            "    set->buf = (pcc_rule_t *)PCC_REALLOC(auxil, set->buf, set->max * sizeof(pcc_rule_t));\n"
            "    set->buf[set->len++] = rule;\n"
            "    return PCC_TRUE;\n"
            "}\n"
            "\n"
            "static pcc_bool_t pcc_rule_set__remove(pcc_auxil_t auxil, pcc_rule_set_t *set, pcc_rule_t rule) {\n"
            "    int i = pcc_rule_set__index(auxil, set, rule);\n"
            "    if (i < 0) return PCC_FALSE;\n"
            "    memmove(set->buf + i, set->buf + (i + 1), (set->len - (i + 1)) * sizeof(pcc_rule_t));\n"
            "    return PCC_TRUE;\n"
            "}\n"
            "\n"
            "static void pcc_rule_set__clear(pcc_auxil_t auxil, pcc_rule_set_t *set) {\n"
            "    set->len = 0;\n"
            "}\n"
            "\n"
            "static void pcc_rule_set__copy(pcc_auxil_t auxil, pcc_rule_set_t *set, const pcc_rule_set_t *src) {\n"
            "    int i;\n"
            "    pcc_rule_set__clear(auxil, set);\n"
            "    for (i = 0; i < src->len; i++) {\n"
            "        pcc_rule_set__add(auxil, set, src->buf[i]);\n"
            "    }\n"
            "}\n"
            "\n"
            "static void pcc_rule_set__term(pcc_auxil_t auxil, pcc_rule_set_t *set) {\n"
            "    PCC_FREE(auxil, set->buf);\n"
            "}\n"
            "\n"
            "static pcc_lr_head_t *pcc_lr_head__create(pcc_auxil_t auxil, pcc_rule_t rule) {\n"
            "    pcc_lr_head_t *head = (pcc_lr_head_t *)PCC_MALLOC(auxil, sizeof(pcc_lr_head_t));\n"
            "    head->rule = rule;\n"
            "    pcc_rule_set__init(auxil, &head->invol, PCC_ARRAYSIZE);\n"
            "    pcc_rule_set__init(auxil, &head->eval, PCC_ARRAYSIZE);\n"
            "    head->hold = NULL;\n"
            "    return head;\n"
            "}\n"
            "\n"
            "static void pcc_lr_head__destroy(pcc_auxil_t auxil, pcc_lr_head_t *head) {\n"
            "    if (head == NULL) return;\n"
            "    pcc_lr_head__destroy(auxil, head->hold);\n"
            "    pcc_rule_set__term(auxil, &head->eval);\n"
            "    pcc_rule_set__term(auxil, &head->invol);\n"
            "    PCC_FREE(auxil, head);\n"
            "}\n"
            "\n"
            "static void pcc_lr_entry__destroy(pcc_auxil_t auxil, pcc_lr_entry_t *lr);\n"
            "\n"
            "static pcc_lr_answer_t *pcc_lr_answer__create(pcc_auxil_t auxil, pcc_lr_answer_type_t type, int pos) {\n"
            "    pcc_lr_answer_t *answer = (pcc_lr_answer_t *)PCC_MALLOC(auxil, sizeof(pcc_lr_answer_t));\n"
            "    answer->type = type;\n"
            "    answer->pos = pos;\n"
            "    answer->hold = NULL;\n"
            "    switch (answer->type) {\n"
            "    case PCC_LR_ANSWER_LR:\n"
            "        answer->data.lr = NULL;\n"
            "        break;\n"
            "    case PCC_LR_ANSWER_CHUNK:\n"
            "        answer->data.chunk = NULL;\n"
            "        break;\n"
            "    default: /* unknown */\n"
            "        PCC_FREE(auxil, answer);\n"
            "        answer = NULL;\n"
            "    }\n"
            "    return answer;\n"
            "}\n"
            "\n"
            "static void pcc_lr_answer__set_chunk(pcc_auxil_t auxil, pcc_lr_answer_t *answer, pcc_thunk_chunk_t *chunk) {\n"
            "    pcc_lr_answer_t *a = pcc_lr_answer__create(auxil, answer->type, answer->pos);\n"
            "    switch (answer->type) {\n"
            "    case PCC_LR_ANSWER_LR:\n"
            "        a->data.lr = answer->data.lr;\n"
            "        break;\n"
            "    case PCC_LR_ANSWER_CHUNK:\n"
            "        a->data.chunk = answer->data.chunk;\n"
            "        break;\n"
            "    default: /* unknown */\n"
            "        break;\n"
            "    }\n"
            "    a->hold = answer->hold;\n"
            "    answer->hold = a;\n"
            "    answer->type = PCC_LR_ANSWER_CHUNK;\n"
            "    answer->data.chunk = chunk;\n"
            "}\n"
            "\n"
            "static void pcc_lr_answer__destroy(pcc_auxil_t auxil, pcc_lr_answer_t *answer) {\n"
            "    if (answer == NULL) return;\n"
            "    pcc_lr_answer__destroy(auxil, answer->hold);\n"
            "    switch (answer->type) {\n"
            "    case PCC_LR_ANSWER_LR:\n"
            "        pcc_lr_entry__destroy(auxil, answer->data.lr);\n"
            "        break;\n"
            "    case PCC_LR_ANSWER_CHUNK:\n"
            "        pcc_thunk_chunk__destroy(auxil, answer->data.chunk);\n"
            "        break;\n"
            "    default: /* unknown */\n"
            "        break;\n"
            "    }\n"
            "    PCC_FREE(auxil, answer);\n"
            "}\n"
            "\n"
            "static void pcc_lr_memo_map__init(pcc_auxil_t auxil, pcc_lr_memo_map_t *map, int max) {\n"
            "    map->len = 0;\n"
            "    map->max = max;\n"
            "    map->buf = (pcc_lr_memo_t *)PCC_MALLOC(auxil, map->max * sizeof(pcc_lr_memo_t));\n"
            "}\n"
            "\n"
            "static int pcc_lr_memo_map__index(pcc_auxil_t auxil, pcc_lr_memo_map_t *map, pcc_rule_t rule) {\n"
            "    int i;\n"
            "    for (i = 0; i < map->len; i++) {\n"
            "        if (map->buf[i].rule == rule) return i;\n"
            "    }\n"
            "    return -1;\n"
            "}\n"
            "\n"
            "static void pcc_lr_memo_map__put(pcc_auxil_t auxil, pcc_lr_memo_map_t *map, pcc_rule_t rule, pcc_lr_answer_t *answer) {\n"
            "    int i = pcc_lr_memo_map__index(auxil, map, rule);\n"
            "    if (i >= 0) {\n"
            "        pcc_lr_answer__destroy(auxil, map->buf[i].answer);\n"
            "        map->buf[i].answer = answer;\n"
            "    }\n"
            "    else {\n"
            "        if (map->max <= 0) map->max = 1;\n"
            "        while (map->max <= map->len) map->max <<= 1;\n"
            "        map->buf = (pcc_lr_memo_t *)PCC_REALLOC(auxil, map->buf, map->max * sizeof(pcc_lr_memo_t));\n"
            "        map->buf[map->len].rule = rule;\n"
            "        map->buf[map->len].answer = answer;\n"
            "        map->len++;\n"
            "    }\n"
            "}\n"
            "\n"
            "static pcc_lr_answer_t *pcc_lr_memo_map__get(pcc_auxil_t auxil, pcc_lr_memo_map_t *map, pcc_rule_t rule) {\n"
            "    int i = pcc_lr_memo_map__index(auxil, map, rule);\n"
            "    return (i >= 0) ? map->buf[i].answer : NULL;\n"
            "}\n"
            "\n"
            "static void pcc_lr_memo_map__term(pcc_auxil_t auxil, pcc_lr_memo_map_t *map) {\n"
            "    int i;\n"
            "    for (i = map->len - 1; i >= 0; i--) pcc_lr_answer__destroy(auxil, map->buf[i].answer);\n"
            "    PCC_FREE(auxil, map->buf);\n"
            "}\n"
            "\n"
            "static pcc_lr_table_entry_t *pcc_lr_table_entry__create(pcc_auxil_t auxil) {\n"
            "    pcc_lr_table_entry_t *entry = (pcc_lr_table_entry_t *)PCC_MALLOC(auxil, sizeof(pcc_lr_table_entry_t));\n"
            "    entry->head = NULL;\n"
            "    pcc_lr_memo_map__init(auxil, &entry->memos, PCC_ARRAYSIZE);\n"
            "    entry->hold_a = NULL;\n"
            "    entry->hold_h = NULL;\n"
            "    return entry;\n"
            "}\n"
            "\n"
            "static void pcc_lr_table_entry__destroy(pcc_auxil_t auxil, pcc_lr_table_entry_t *entry) {\n"
            "    if (entry == NULL) return;\n"
            "    pcc_lr_head__destroy(auxil, entry->hold_h);\n"
            "    pcc_lr_answer__destroy(auxil, entry->hold_a);\n"
            "    pcc_lr_memo_map__term(auxil, &entry->memos);\n"
            "    PCC_FREE(auxil, entry);\n"
            "}\n"
            "\n"
            "static void pcc_lr_table__init(pcc_auxil_t auxil, pcc_lr_table_t *table, int max) {\n"
            "    table->len = 0;\n"
            "    table->max = max;\n"
            "    table->buf = (pcc_lr_table_entry_t **)PCC_MALLOC(auxil, table->max * sizeof(pcc_lr_table_entry_t *));\n"
            "}\n"
            "\n"
            "static void pcc_lr_table__resize(pcc_auxil_t auxil, pcc_lr_table_t *table, int len) {\n"
            "    int i;\n"
            "    for (i = table->len - 1; i >= len; i--) pcc_lr_table_entry__destroy(auxil, table->buf[i]);\n"
            "    if (table->max < len) {\n"
            "        if (table->max <= 0) table->max = 1;\n"
            "        while (table->max < len) table->max <<= 1;\n"
            "        table->buf = (pcc_lr_table_entry_t **)PCC_REALLOC(auxil, table->buf, table->max * sizeof(pcc_lr_table_entry_t *));\n"
            "    }\n"
            "    for (i = table->len; i < len; i++) table->buf[i] = NULL;\n"
            "    table->len = len;\n"
            "}\n"
            "\n"
            "static void pcc_lr_table__set_head(pcc_auxil_t auxil, pcc_lr_table_t *table, int index, pcc_lr_head_t *head) {\n"
            "    if (index >= table->len) pcc_lr_table__resize(auxil, table, index + 1);\n"
            "    if (table->buf[index] == NULL) table->buf[index] = pcc_lr_table_entry__create(auxil);\n"
            "    table->buf[index]->head = head;\n"
            "}\n"
            "\n"
            "static void pcc_lr_table__hold_head(pcc_auxil_t auxil, pcc_lr_table_t *table, int index, pcc_lr_head_t *head) {\n"
            "    if (index >= table->len) pcc_lr_table__resize(auxil, table, index + 1);\n"
            "    if (table->buf[index] == NULL) table->buf[index] = pcc_lr_table_entry__create(auxil);\n"
            "    head->hold = table->buf[index]->hold_h;\n"
            "    table->buf[index]->hold_h = head;\n"
            "}\n"
            "\n"
            "static void pcc_lr_table__set_answer(pcc_auxil_t auxil, pcc_lr_table_t *table, int index, pcc_rule_t rule, pcc_lr_answer_t *answer) {\n"
            "    if (index >= table->len) pcc_lr_table__resize(auxil, table, index + 1);\n"
            "    if (table->buf[index] == NULL) table->buf[index] = pcc_lr_table_entry__create(auxil);\n"
            "    pcc_lr_memo_map__put(auxil, &table->buf[index]->memos, rule, answer);\n"
            "}\n"
            "\n"
            "static void pcc_lr_table__hold_answer(pcc_auxil_t auxil, pcc_lr_table_t *table, int index, pcc_lr_answer_t *answer) {\n"
            "    if (index >= table->len) pcc_lr_table__resize(auxil, table, index + 1);\n"
            "    if (table->buf[index] == NULL) table->buf[index] = pcc_lr_table_entry__create(auxil);\n"
            "    answer->hold = table->buf[index]->hold_a;\n"
            "    table->buf[index]->hold_a = answer;\n"
            "}\n"
            "\n"
            "static pcc_lr_head_t *pcc_lr_table__get_head(pcc_auxil_t auxil, pcc_lr_table_t *table, int index) {\n"
            "    if (index >= table->len || table->buf[index] == NULL) return NULL;\n"
            "    return table->buf[index]->head;\n"
            "}\n"
            "\n"
            "static pcc_lr_answer_t *pcc_lr_table__get_answer(pcc_auxil_t auxil, pcc_lr_table_t *table, int index, pcc_rule_t rule) {\n"
            "    if (index >= table->len || table->buf[index] == NULL) return NULL;\n"
            "    return pcc_lr_memo_map__get(auxil, &table->buf[index]->memos, rule);\n"
            "}\n"
            "\n"
            "static void pcc_lr_table__shift(pcc_auxil_t auxil, pcc_lr_table_t *table, int count) {\n"
            "    int i;\n"
            "    if (count > table->len) count = table->len;\n"
            "    for (i = 0; i < count; i++) pcc_lr_table_entry__destroy(auxil, table->buf[i]);\n"
            "    memmove(table->buf, table->buf + count, (table->len - count) * sizeof(pcc_lr_table_entry_t *));\n"
            "    table->len -= count;\n"
            "}\n"
            "\n"
            "static void pcc_lr_table__term(pcc_auxil_t auxil, pcc_lr_table_t *table) {\n"
            "    int i;\n"
            "    for (i = table->len - 1; i >= 0; i--) pcc_lr_table_entry__destroy(auxil, table->buf[i]);\n"
            "    PCC_FREE(auxil, table->buf);\n"
            "}\n"
            "\n"
            "static pcc_lr_entry_t *pcc_lr_entry__create(pcc_auxil_t auxil, pcc_rule_t rule) {\n"
            "    pcc_lr_entry_t *lr = (pcc_lr_entry_t *)PCC_MALLOC(auxil, sizeof(pcc_lr_entry_t));\n"
            "    lr->rule = rule;\n"
            "    lr->seed = NULL;\n"
            "    lr->head = NULL;\n"
            "    return lr;\n"
            "}\n"
            "\n"
            "static void pcc_lr_entry__destroy(pcc_auxil_t auxil, pcc_lr_entry_t *lr) {\n"
            "    PCC_FREE(auxil, lr);\n"
            "}\n"
            "\n"
            "static void pcc_lr_stack__init(pcc_auxil_t auxil, pcc_lr_stack_t *stack, int max) {\n"
            "    stack->len = 0;\n"
            "    stack->max = max;\n"
            "    stack->buf = (pcc_lr_entry_t **)PCC_MALLOC(auxil, stack->max * sizeof(pcc_lr_entry_t *));\n"
            "}\n"
            "\n"
            "static void pcc_lr_stack__push(pcc_auxil_t auxil, pcc_lr_stack_t *stack, pcc_lr_entry_t *lr) {\n"
            "    if (stack->max <= 0) stack->max = 1;\n"
            "    while (stack->max <= stack->len) stack->max <<= 1;\n"
            "    stack->buf = (pcc_lr_entry_t **)PCC_REALLOC(auxil, stack->buf, stack->max * sizeof(pcc_lr_entry_t *));\n"
            "    stack->buf[stack->len++] = lr;\n"
            "}\n"
            "\n"
            "static pcc_lr_entry_t *pcc_lr_stack__pop(pcc_auxil_t auxil, pcc_lr_stack_t *stack) {\n"
            "    return stack->buf[--stack->len];\n"
            "}\n"
            "\n"
            "static void pcc_lr_stack__term(pcc_auxil_t auxil, pcc_lr_stack_t *stack) {\n"
            "    PCC_FREE(auxil, stack->buf);\n"
            "}\n"
            "\n",
            stream
        );
        fprintf(
            stream,
            "static %s_context_t *pcc_context__create(pcc_auxil_t auxil) {\n"
            "    %s_context_t *ctx = (%s_context_t *)PCC_MALLOC(auxil, sizeof(%s_context_t));\n",
            get_prefix(ctx), get_prefix(ctx), get_prefix(ctx), get_prefix(ctx)
        );
        fputs(
            "    ctx->pos = 0;\n"
            "    pcc_char_array__init(auxil, &ctx->buffer, PCC_BUFFERSIZE);\n"
            "    pcc_lr_table__init(auxil, &ctx->lrtable, PCC_BUFFERSIZE);\n"
            "    pcc_lr_stack__init(auxil, &ctx->lrstack, PCC_ARRAYSIZE);\n"
            "    ctx->auxil = auxil;\n"
            "    return ctx;\n"
            "}\n"
            "\n",
            stream
        );
        fprintf(
            stream,
            "static void pcc_context__destroy(%s_context_t *ctx) {\n",
            get_prefix(ctx)
        );
        fputs(
            "    if (ctx == NULL) return;\n"
            "    pcc_lr_stack__term(ctx->auxil, &ctx->lrstack);\n"
            "    pcc_lr_table__term(ctx->auxil, &ctx->lrtable);\n"
            "    pcc_char_array__term(ctx->auxil, &ctx->buffer);\n"
            "    PCC_FREE(ctx->auxil, ctx);\n"
            "}\n"
            "\n",
            stream
        );
        fprintf(
            stream,
            "static int pcc_refill_buffer(%s_context_t *ctx, int num) {\n",
            get_prefix(ctx)
        );
        fputs(
            "    int n, c;\n"
            "    n = ctx->buffer.len - ctx->pos;\n"
            "    if (n >= num) return n;\n"
            "    while (ctx->buffer.len < ctx->pos + num) {\n"
            "        c = PCC_GETCHAR(ctx->auxil);\n"
            "        if (c == EOF) break;\n"
            "        pcc_char_array__add(ctx->auxil, &ctx->buffer, (char)c);\n"
            "    }\n"
            "    return ctx->buffer.len - ctx->pos;\n"
            "}\n"
            "\n",
            stream
        );
        fprintf(
            stream,
            "static void pcc_commit_buffer(%s_context_t *ctx) {\n",
            get_prefix(ctx)
        );
        fputs(
            "    memmove(ctx->buffer.buf, ctx->buffer.buf + ctx->pos, ctx->buffer.len - ctx->pos);\n"
            "    ctx->buffer.len -= ctx->pos;\n"
            "    pcc_lr_table__shift(ctx->auxil, &ctx->lrtable, ctx->pos);\n"
            "    ctx->pos = 0;\n"
            "}\n"
            "\n",
            stream
        );
        fprintf(
            stream,
            "static const char *pcc_get_capture_string(%s_context_t *ctx, const pcc_capture_t *capt) {\n",
            get_prefix(ctx)
        );
        fputs(
            "    if (capt->string == NULL)\n"
            "        ((pcc_capture_t *)capt)->string =\n"
            "            pcc_strndup_e(ctx->auxil, ctx->buffer.buf + capt->range.start, capt->range.end - capt->range.start);\n"
            "    return capt->string;\n"
            "}\n"
            "\n",
            stream
        );
        fprintf(
            stream,
            "static pcc_bool_t pcc_apply_rule(%s_context_t *ctx, pcc_rule_t rule, pcc_thunk_array_t *thunks, pcc_value_t *value) {\n",
            get_prefix(ctx)
        );
        fputs(
            "    static pcc_value_t null;\n"
            "    pcc_thunk_chunk_t *c = NULL;\n"
            "    int p = ctx->pos;\n"
            "    pcc_bool_t b = PCC_TRUE;\n"
            "    pcc_lr_answer_t *a = pcc_lr_table__get_answer(ctx->auxil, &ctx->lrtable, p, rule);\n"
            "    pcc_lr_head_t *h = pcc_lr_table__get_head(ctx->auxil, &ctx->lrtable, p);\n"
            "    if (h != NULL) {\n"
            "        if (a == NULL && rule != h->rule && pcc_rule_set__index(ctx->auxil, &h->invol, rule) < 0) {\n"
            "            b = PCC_FALSE;\n"
            "            c = NULL;\n"
            "        }\n"
            "        else if (pcc_rule_set__remove(ctx->auxil, &h->eval, rule)) {\n"
            "            b = PCC_FALSE;\n"
            "            c = rule(ctx);\n"
            "            a = pcc_lr_answer__create(ctx->auxil, PCC_LR_ANSWER_CHUNK, ctx->pos);\n"
            "            a->data.chunk = c;\n"
            "            pcc_lr_table__hold_answer(ctx->auxil, &ctx->lrtable, p, a);\n"
            "        }\n"
            "    }\n"
            "    if (b) {\n"
            "        if (a != NULL) {\n"
            "            ctx->pos = a->pos;\n"
            "            switch (a->type) {\n"
            "            case PCC_LR_ANSWER_LR:\n"
            "                if (a->data.lr->head == NULL) {\n"
            "                    a->data.lr->head = pcc_lr_head__create(ctx->auxil, rule);\n"
            "                    pcc_lr_table__hold_head(ctx->auxil, &ctx->lrtable, p, a->data.lr->head);\n"
            "                }\n"
            "                {\n"
            "                    int i;\n"
            "                    for (i = ctx->lrstack.len - 1; i >= 0; i--) {\n"
            "                        if (ctx->lrstack.buf[i]->head == a->data.lr->head) break;\n"
            "                        ctx->lrstack.buf[i]->head = a->data.lr->head;\n"
            "                        pcc_rule_set__add(ctx->auxil, &a->data.lr->head->invol, ctx->lrstack.buf[i]->rule);\n"
            "                    }\n"
            "                }\n"
            "                c = a->data.lr->seed;\n"
            "                break;\n"
            "            case PCC_LR_ANSWER_CHUNK:\n"
            "                c = a->data.chunk;\n"
            "                break;\n"
            "            default: /* unknown */\n"
            "                break;\n"
            "            }\n"
            "        }\n"
            "        else {\n"
            "            pcc_lr_entry_t *e = pcc_lr_entry__create(ctx->auxil, rule);\n"
            "            pcc_lr_stack__push(ctx->auxil, &ctx->lrstack, e);\n"
            "            a = pcc_lr_answer__create(ctx->auxil, PCC_LR_ANSWER_LR, p);\n"
            "            a->data.lr = e;\n"
            "            pcc_lr_table__set_answer(ctx->auxil, &ctx->lrtable, p, rule, a);\n"
            "            c = rule(ctx);\n"
            "            pcc_lr_stack__pop(ctx->auxil, &ctx->lrstack);\n"
            "            a->pos = ctx->pos;\n"
            "            if (e->head == NULL) {\n"
            "                pcc_lr_answer__set_chunk(ctx->auxil, a, c);\n"
            "            }\n"
            "            else {\n"
            "                e->seed = c;\n"
            "                h = a->data.lr->head;\n"
            "                if (h->rule != rule) {\n"
            "                    c = a->data.lr->seed;\n"
            "                    a = pcc_lr_answer__create(ctx->auxil, PCC_LR_ANSWER_CHUNK, ctx->pos);\n"
            "                    a->data.chunk = c;\n"
            "                    pcc_lr_table__hold_answer(ctx->auxil, &ctx->lrtable, p, a);\n"
            "                }\n"
            "                else {\n"
            "                    pcc_lr_answer__set_chunk(ctx->auxil, a, a->data.lr->seed);\n"
            "                    if (a->data.chunk == NULL) {\n"
            "                        c = NULL;\n"
            "                    }\n"
            "                    else {\n"
            "                        pcc_lr_table__set_head(ctx->auxil, &ctx->lrtable, p, h);\n"
            "                        for (;;) {\n"
            "                            ctx->pos = p;\n"
            "                            pcc_rule_set__copy(ctx->auxil, &h->eval, &h->invol);\n"
            "                            c = rule(ctx);\n"
            "                            if (c == NULL || ctx->pos <= a->pos) break;\n"
            "                            pcc_lr_answer__set_chunk(ctx->auxil, a, c);\n"
            "                            a->pos = ctx->pos;\n"
            "                        }\n"
            "                        pcc_thunk_chunk__destroy(ctx->auxil, c);\n"
            "                        pcc_lr_table__set_head(ctx->auxil, &ctx->lrtable, p, NULL);\n"
            "                        ctx->pos = a->pos;\n"
            "                        c = a->data.chunk;\n"
            "                    }\n"
            "                }\n"
            "            }\n"
            "        }\n"
            "    }\n"
            "    if (c == NULL) return PCC_FALSE;\n"
            "    if (value == NULL) value = &null;\n"
            "    memset(value, 0, sizeof(pcc_value_t)); /* in case */\n"
            "    pcc_thunk_array__add(ctx->auxil, thunks, pcc_thunk__create_node(ctx->auxil, &c->thunks, value));\n"
            "    return PCC_TRUE;\n"
            "}\n"
            "\n",
            stream
        );
        fprintf(
            stream,
            "static void pcc_do_action(%s_context_t *ctx, const pcc_thunk_array_t *thunks, pcc_value_t *value) {\n",
            get_prefix(ctx)
        );
        fputs(
            "    int i;\n"
            "    for (i = 0; i < thunks->len; i++) {\n"
            "        pcc_thunk_t *thunk = thunks->buf[i];\n"
            "        switch (thunk->type) {\n"
            "        case PCC_THUNK_LEAF:\n"
            "            thunk->data.leaf.action(ctx, thunk, value);\n"
            "            break;\n"
            "        case PCC_THUNK_NODE:\n"
            "            pcc_do_action(ctx, thunk->data.node.thunks, thunk->data.node.value);\n"
            "            break;\n"
            "        default: /* unknown */\n"
            "            break;\n"
            "        }\n"
            "    }\n"
            "}\n"
            "\n",
            stream
        );
        {
            int i, j, k;
            for (i = 0; i < ctx->rules.len; i++) {
                const node_rule_t *r = &ctx->rules.buf[i]->data.rule;
                for (j = 0; j < r->codes.len; j++) {
                    const char *s;
                    int d;
                    const node_const_array_t *v, *c;
                    switch (r->codes.buf[j]->type) {
                    case NODE_ACTION:
                        s = r->codes.buf[j]->data.action.value;
                        d = r->codes.buf[j]->data.action.index;
                        v = &r->codes.buf[j]->data.action.vars;
                        c = &r->codes.buf[j]->data.action.capts;
                        break;
                    case NODE_ERROR:
                        s = r->codes.buf[j]->data.error.value;
                        d = r->codes.buf[j]->data.error.index;
                        v = &r->codes.buf[j]->data.error.vars;
                        c = &r->codes.buf[j]->data.error.capts;
                        break;
                    default:
                        print_error("Internal error [%d]\n", 3580);
                        exit(-1);
                    }
                    fprintf(
                        stream,
                        "static void pcc_action_%s_%d(%s_context_t *__pcc_ctx, pcc_thunk_t *__pcc_in, pcc_value_t *__pcc_out) {\n",
                        r->name, d, get_prefix(ctx)
                    );
                    fputs(
                        "#define auxil (__pcc_ctx->auxil)\n"
                        "#define __ (*__pcc_out)\n",
                        stream
                    );
                    for (k = 0; k < v->len; k++) {
                        (__builtin_expect(!(v->buf[k]->type == NODE_REFERENCE), 0) ? __assert_rtn(__func__, "packcc.c", 3594, "v->buf[k]->type == NODE_REFERENCE") : (void)0);
                        fprintf(
                            stream,
                            "#define %s (*__pcc_in->data.leaf.values.buf[%d])\n",
                            v->buf[k]->data.reference.var,
                            v->buf[k]->data.reference.index
                        );
                    }
                    fputs(
                        "#define _0 pcc_get_capture_string(__pcc_ctx, &__pcc_in->data.leaf.capt0)\n"
                        "#define _0s ((const)__pcc_in->data.leaf.capt0.range.start)\n"
                        "#define _0e ((const)__pcc_in->data.leaf.capt0.range.end)\n",
                        stream
                    );
                    for (k = 0; k < c->len; k++) {
                        (__builtin_expect(!(c->buf[k]->type == NODE_CAPTURE), 0) ? __assert_rtn(__func__, "packcc.c", 3609, "c->buf[k]->type == NODE_CAPTURE") : (void)0);
                        fprintf(
                            stream,
                            "#define _%d pcc_get_capture_string(__pcc_ctx, __pcc_in->data.leaf.capts.buf[%d])\n",
                            c->buf[k]->data.capture.index + 1,
                            c->buf[k]->data.capture.index
                        );
                        fprintf(
                            stream,
                            "#define _%ds __pcc_in->data.leaf.capts.buf[%d]->range.start\n",
                            c->buf[k]->data.capture.index + 1,
                            c->buf[k]->data.capture.index
                        );
                        fprintf(
                            stream,
                            "#define _%de __pcc_in->data.leaf.capts.buf[%d]->range.end\n",
                            c->buf[k]->data.capture.index + 1,
                            c->buf[k]->data.capture.index
                        );
                    }
                    write_code_block(stream, s, strlen(s), 4);
                    for (k = c->len - 1; k >= 0; k--) {
                        (__builtin_expect(!(c->buf[k]->type == NODE_CAPTURE), 0) ? __assert_rtn(__func__, "packcc.c", 3631, "c->buf[k]->type == NODE_CAPTURE") : (void)0);
                        fprintf(
                            stream,
                            "#undef _%de\n",
                            c->buf[k]->data.capture.index + 1
                        );
                        fprintf(
                            stream,
                            "#undef _%ds\n",
                            c->buf[k]->data.capture.index + 1
                        );
                        fprintf(
                            stream,
                            "#undef _%d\n",
                            c->buf[k]->data.capture.index + 1
                        );
                    }
                    fputs(
                        "#undef _0e\n"
                        "#undef _0s\n"
                        "#undef _0\n",
                        stream
                    );
                    for (k = v->len - 1; k >= 0; k--) {
                        (__builtin_expect(!(v->buf[k]->type == NODE_REFERENCE), 0) ? __assert_rtn(__func__, "packcc.c", 3655, "v->buf[k]->type == NODE_REFERENCE") : (void)0);
                        fprintf(
                            stream,
                            "#undef %s\n",
                            v->buf[k]->data.reference.var
                        );
                    }
                    fputs(
                        "#undef __\n"
                        "#undef auxil\n",
                        stream
                    );
                    fputs(
                        "}\n"
                        "\n",
                        stream
                    );
                }
            }
        }
        {
            int i;
            for (i = 0; i < ctx->rules.len; i++) {
                fprintf(
                    stream,
                    "static pcc_thunk_chunk_t *pcc_evaluate_rule_%s(%s_context_t *ctx);\n",
                    ctx->rules.buf[i]->data.rule.name, get_prefix(ctx)
                );
            }
            fputs(
                "\n",
                stream
            );
            for (i = 0; i < ctx->rules.len; i++) {
                code_reach_t r;
                generate_t g;
                g.stream = stream;
                g.rule = ctx->rules.buf[i];
                g.label = 0;
                fprintf(
                    stream,
                    "static pcc_thunk_chunk_t *pcc_evaluate_rule_%s(%s_context_t *ctx) {\n",
                    ctx->rules.buf[i]->data.rule.name, get_prefix(ctx)
                );
                fputs(
                    "    pcc_thunk_chunk_t *chunk = pcc_thunk_chunk__create(ctx->auxil);\n"
                    "    chunk->pos = ctx->pos;\n",
                    stream
                );
                fprintf(
                    stream,
                    "    pcc_value_table__resize(ctx->auxil, &chunk->values, %d);\n",
                    ctx->rules.buf[i]->data.rule.vars.len
                );
                fprintf(
                    stream,
                    "    pcc_capture_table__resize(ctx->auxil, &chunk->capts, %d);\n",
                    ctx->rules.buf[i]->data.rule.capts.len
                );
                r = generate_code(&g, ctx->rules.buf[i]->data.rule.expr, 0, 4, FALSE);
                fputs(
                    "    return chunk;\n",
                    stream
                );
                if (r != CODE_REACH__ALWAYS_SUCCEED) {
                    fputs(
                        "L0000:;\n"
                        "    pcc_thunk_chunk__destroy(ctx->auxil, chunk);\n"
                        "    return NULL;\n",
                        stream
                    );
                }
                fputs(
                    "}\n"
                    "\n",
                    stream
                );
            }
        }
        fprintf(
            stream,
            "%s_context_t *%s_create(%s%sauxil) {\n",
            get_prefix(ctx), get_prefix(ctx),
            at, ap ? "" : " "
        );
        fputs(
            "    return pcc_context__create(auxil);\n"
            "}\n"
            "\n",
            stream
        );
        fprintf(
            stream,
            "int %s_parse(%s_context_t *ctx, %s%s*ret) {\n",
            get_prefix(ctx), get_prefix(ctx),
            vt, vp ? "" : " "
        );
        fputs(
            "    pcc_thunk_array_t thunks;\n"
            "    pcc_thunk_array__init(ctx->auxil, &thunks, PCC_ARRAYSIZE);\n",
            stream
        );
        if (ctx->rules.len > 0) {
            fprintf(
                stream,
                "    if (pcc_apply_rule(ctx, pcc_evaluate_rule_%s, &thunks, ret))\n",
                ctx->rules.buf[0]->data.rule.name
            );
            fputs(
                "        pcc_do_action(ctx, &thunks, ret);\n"
                "    else\n"
                "        PCC_ERROR(ctx->auxil);\n"
                "    pcc_commit_buffer(ctx);\n",
                stream
            );
        }
        fputs(
            "    pcc_thunk_array__term(ctx->auxil, &thunks);\n"
            "    return pcc_refill_buffer(ctx, 1) >= 1;\n"
            "}\n"
            "\n",
            stream
        );
        fprintf(
            stream,
            "void %s_destroy(%s_context_t *ctx) {\n",
            get_prefix(ctx), get_prefix(ctx)
        );
        fputs(
            "    pcc_context__destroy(ctx);\n"
            "}\n",
            stream
        );
    }
    {
        fputs(
            "#ifdef __cplusplus\n"
            "extern \"C\" {\n"
            "#endif\n"
            "\n",
            ctx->hfile
        );
        fprintf(
            ctx->hfile,
            "typedef struct %s_context_tag %s_context_t;\n"
            "\n",
            get_prefix(ctx), get_prefix(ctx)
        );
        fprintf(
            ctx->hfile,
            "%s_context_t *%s_create(%s%sauxil);\n",
            get_prefix(ctx), get_prefix(ctx),
            at, ap ? "" : " "
        );
        fprintf(
            ctx->hfile,
            "int %s_parse(%s_context_t *ctx, %s%s*ret);\n",
            get_prefix(ctx), get_prefix(ctx),
            vt, vp ? "" : " "
        );
        fprintf(
            ctx->hfile,
            "void %s_destroy(%s_context_t *ctx);\n",
            get_prefix(ctx), get_prefix(ctx)
        );
        fputs(
            "\n"
            "#ifdef __cplusplus\n"
            "}\n"
            "#endif\n",
            ctx->hfile
        );
        fprintf(
            ctx->hfile,
            "\n"
            "#endif /* PCC_INCLUDED__%s */\n",
            ctx->hid
        );
    }
    {
        match_eol(ctx);
        if (!match_eof(ctx)) fputc('\n', stream);
        commit_buffer(ctx);
        while (refill_buffer(ctx, ctx->buffer.max) > 0) {
            int n = (ctx->buffer.buf[ctx->buffer.len - 1] == '\r') ? ctx->buffer.len - 1 : ctx->buffer.len;
            write_text(stream, ctx->buffer.buf, n);
            ctx->bufpos = n;
            commit_buffer(ctx);
        }
    }
    return (ctx->errnum == 0) ? TRUE : FALSE;
}

static void print_version(FILE *output) {
    fprintf(output, "%s version %s\n", g_cmdname, "1.2.0");
    fprintf(output, "Copyright (c) 2014 Arihiro Yoshida. All rights reserved.\n");
}

static void print_usage(FILE *output) {
    fprintf(output, "Usage: %s [OPTIONS] [FILE]\n", g_cmdname);
    fprintf(output, "Generates a packrat parser for C.\n");
    fprintf(output, "\n");
    fprintf(output, "  -o BASENAME  specify a base name of output source and header files\n");
    fprintf(output, "  -d           with debug information\n");
    fprintf(output, "  -h           print this help message and exit\n");
    fprintf(output, "  -v           print the version and exit\n");
}

int main(int argc, char **argv) {
    const char *iname = ((void *)0);
    const char *oname = ((void *)0);
    bool_t debug = FALSE;







    g_cmdname = extract_filename(argv[0]);
    {
        const char *fname = ((void *)0);
        const char *opt_o = ((void *)0);
        bool_t opt_d = FALSE;
        bool_t opt_h = FALSE;
        bool_t opt_v = FALSE;
        int i;
        for (i = 1; i < argc; i++) {
            if (argv[i][0] != '-') {
                break;
            }
            else if (strcmp(argv[i] + 1, "-") == 0) {
                i++; break;
            }
            else if (argv[i][1] == 'o') {
                const char *o = (argv[i][2] != '\0') ? argv[i] + 2 : (++i < argc) ? argv[i] : ((void *)0);
                if (o == ((void *)0)) {
                    print_error("Output base name missing\n");
                    fprintf(__stderrp, "\n");
                    print_usage(__stderrp);
                    exit(1);
                }
                if (opt_o != ((void *)0)) {
                    print_error("Extra output base name '%s'\n", o);
                    fprintf(__stderrp, "\n");
                    print_usage(__stderrp);
                    exit(1);
                }
                opt_o = o;
            }
            else if (strcmp(argv[i] + 1, "d") == 0) {
                opt_d = TRUE;
            }
            else if (strcmp(argv[i] + 1, "h") == 0) {
                opt_h = TRUE;
            }
            else if (strcmp(argv[i] + 1, "v") == 0) {
                opt_v = TRUE;
            }
            else {
                print_error("Invalid option '%s'\n", argv[i]);
                fprintf(__stderrp, "\n");
                print_usage(__stderrp);
                exit(1);
            }
        }
        switch (argc - i) {
        case 0:
            break;
        case 1:
            fname = argv[i];
            break;
        default:
            print_error("Multiple input files\n");
            fprintf(__stderrp, "\n");
            print_usage(__stderrp);
            exit(1);
        }
        if (opt_h || opt_v) {
            if (opt_v) print_version(__stdoutp);
            if (opt_v && opt_h) fprintf(__stdoutp, "\n");
            if (opt_h) print_usage(__stdoutp);
            exit(0);
        }
        iname = (fname != ((void *)0) && fname[0] != '\0') ? fname : ((void *)0);
        oname = (opt_o != ((void *)0) && opt_o[0] != '\0') ? opt_o : ((void *)0);
        debug = opt_d;
    }
    {
        context_t *ctx = create_context(iname, oname, debug);
        int b = parse(ctx) && generate(ctx);
        destroy_context(ctx);
        if (!b) exit(10);
    }
    return 0;
}
