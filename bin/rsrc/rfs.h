namespace rfs
{
	int socket(int af,int type,int protocol)
	{
		sub esp,4
		push protocol
		push type
		push af
		calle rf.c_s_socket
		mov s_ret,[esp]
		add esp,4
	}

	int connect(int s,void* name,int namelen)
	{
		sub esp,4
		push namelen
		push name
		push s
		calle rf.c_s_connect
		mov s_ret,[esp]
		add esp,4
	}
	
	int close(int sock)
	{
		sub esp,4
		push sock
		calle rf.c_s_close
		mov s_ret,[esp]
		add esp,4
	}
	
	int send(int s,void* data,int size,int flags)
	{
		sub esp,4
		push flags
		push size
		push data
		push s
		calle rf.c_s_send
		mov s_ret,[esp]
		add esp,4
	}

	int recv(int s,void* data,int size,int flags)
	{
		sub esp,4
		push flags
		push size
		push data
		push s
		calle rf.c_s_recv
		mov s_ret,[esp]
		add esp,4
	}
	
	int bind(int s,void* addr,int namelen)
	{
		sub esp,4
		push namelen
		push addr
		push s
		calle rf.c_s_bind
		mov s_ret,[esp]
		add esp,4
	}

	int listen(int s,int backlog)
	{
		sub esp,4
		push backlog
		push s
		calle rf.c_s_listen
		mov s_ret,[esp]
		add esp,4
	}

	int accept(int s,void* addr,int* addrlen)
	{
		sub esp,4
		push addrlen
		push addr
		push s
		calle rf.c_s_accept
		mov s_ret,[esp]
		add esp,4
	}
}