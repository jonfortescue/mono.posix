/* This file was automatically generated by make-map from ../lib/Mono.Posix.dll */

#define _GNU_SOURCE
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <unistd.h>
#include <fcntl.h>
#include <signal.h>
#include "map.h"
int map_Mono_Posix_OpenFlags (int x)
{
	int r = 0;
	if ((x & Mono_Posix_OpenFlags_O_RDONLY) != 0)
		r |= O_RDONLY;
	if ((x & Mono_Posix_OpenFlags_O_WRONLY) != 0)
		r |= O_WRONLY;
	if ((x & Mono_Posix_OpenFlags_O_RDWR) != 0)
		r |= O_RDWR;
	if ((x & Mono_Posix_OpenFlags_O_CREAT) != 0)
		r |= O_CREAT;
	if ((x & Mono_Posix_OpenFlags_O_EXCL) != 0)
		r |= O_EXCL;
	if ((x & Mono_Posix_OpenFlags_O_NOCTTY) != 0)
		r |= O_NOCTTY;
	if ((x & Mono_Posix_OpenFlags_O_TRUNC) != 0)
		r |= O_TRUNC;
	if ((x & Mono_Posix_OpenFlags_O_APPEND) != 0)
		r |= O_APPEND;
	if ((x & Mono_Posix_OpenFlags_O_NONBLOCK) != 0)
		r |= O_NONBLOCK;
	if ((x & Mono_Posix_OpenFlags_O_SYNC) != 0)
		r |= O_SYNC;
	return r;
}

int map_Mono_Posix_FileMode (int x)
{
	int r = 0;
	if ((x & Mono_Posix_FileMode_S_ISUID) != 0)
		r |= S_ISUID;
	if ((x & Mono_Posix_FileMode_S_ISGID) != 0)
		r |= S_ISGID;
	if ((x & Mono_Posix_FileMode_S_ISVTX) != 0)
		r |= S_ISVTX;
	if ((x & Mono_Posix_FileMode_S_IRUSR) != 0)
		r |= S_IRUSR;
	if ((x & Mono_Posix_FileMode_S_IWUSR) != 0)
		r |= S_IWUSR;
	if ((x & Mono_Posix_FileMode_S_IXUSR) != 0)
		r |= S_IXUSR;
	if ((x & Mono_Posix_FileMode_S_IRGRP) != 0)
		r |= S_IRGRP;
	if ((x & Mono_Posix_FileMode_S_IWGRP) != 0)
		r |= S_IWGRP;
	if ((x & Mono_Posix_FileMode_S_IXGRP) != 0)
		r |= S_IXGRP;
	if ((x & Mono_Posix_FileMode_S_IROTH) != 0)
		r |= S_IROTH;
	if ((x & Mono_Posix_FileMode_S_IWOTH) != 0)
		r |= S_IWOTH;
	if ((x & Mono_Posix_FileMode_S_IXOTH) != 0)
		r |= S_IXOTH;
	return r;
}

int map_Mono_Posix_WaitOptions (int x)
{
	int r = 0;
	if ((x & Mono_Posix_WaitOptions_WNOHANG) != 0)
		r |= WNOHANG;
	if ((x & Mono_Posix_WaitOptions_WUNTRACED) != 0)
		r |= WUNTRACED;
	return r;
}

int map_Mono_Posix_AccessMode (int x)
{
	int r = 0;
	if ((x & Mono_Posix_AccessMode_R_OK) != 0)
		r |= R_OK;
	if ((x & Mono_Posix_AccessMode_W_OK) != 0)
		r |= W_OK;
	if ((x & Mono_Posix_AccessMode_X_OK) != 0)
		r |= X_OK;
	if ((x & Mono_Posix_AccessMode_F_OK) != 0)
		r |= F_OK;
	return r;
}

int map_Mono_Posix_Signals (int x)
{
	if (x == Mono_Posix_Signals_SIGHUP)
		 return SIGHUP;
	if (x == Mono_Posix_Signals_SIGINT)
		 return SIGINT;
	if (x == Mono_Posix_Signals_SIGQUIT)
		 return SIGQUIT;
	if (x == Mono_Posix_Signals_SIGILL)
		 return SIGILL;
	if (x == Mono_Posix_Signals_SIGTRAP)
		 return SIGTRAP;
	if (x == Mono_Posix_Signals_SIGABRT)
		 return SIGABRT;
	if (x == Mono_Posix_Signals_SIGBUS)
		 return SIGBUS;
	if (x == Mono_Posix_Signals_SIGFPE)
		 return SIGFPE;
	if (x == Mono_Posix_Signals_SIGKILL)
		 return SIGKILL;
	if (x == Mono_Posix_Signals_SIGUSR1)
		 return SIGUSR1;
	if (x == Mono_Posix_Signals_SIGSEGV)
		 return SIGSEGV;
	if (x == Mono_Posix_Signals_SIGUSR2)
		 return SIGUSR2;
	if (x == Mono_Posix_Signals_SIGPIPE)
		 return SIGPIPE;
	if (x == Mono_Posix_Signals_SIGALRM)
		 return SIGALRM;
	if (x == Mono_Posix_Signals_SIGTERM)
		 return SIGTERM;
	if (x == Mono_Posix_Signals_SIGCHLD)
		 return SIGCHLD;
	if (x == Mono_Posix_Signals_SIGCONT)
		 return SIGCONT;
	if (x == Mono_Posix_Signals_SIGSTOP)
		 return SIGSTOP;
	if (x == Mono_Posix_Signals_SIGTSTP)
		 return SIGTSTP;
	if (x == Mono_Posix_Signals_SIGTTIN)
		 return SIGTTIN;
	if (x == Mono_Posix_Signals_SIGTTOU)
		 return SIGTTOU;
	if (x == Mono_Posix_Signals_SIGURG)
		 return SIGURG;
	if (x == Mono_Posix_Signals_SIGXCPU)
		 return SIGXCPU;
	if (x == Mono_Posix_Signals_SIGXFSZ)
		 return SIGXFSZ;
	if (x == Mono_Posix_Signals_SIGVTALRM)
		 return SIGVTALRM;
	if (x == Mono_Posix_Signals_SIGPROF)
		 return SIGPROF;
	if (x == Mono_Posix_Signals_SIGWINCH)
		 return SIGWINCH;
	if (x == Mono_Posix_Signals_SIGIO)
		 return SIGIO;
	if (x == Mono_Posix_Signals_SIGSYS)
		 return SIGSYS;
	return -1;
}

