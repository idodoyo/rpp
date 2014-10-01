/*
线程
RPP处理返回值的方式和cdecl,stdcall不同，因此回调的时候最好添加一个胶水函数
*/

main
{
	p=rf.create_thr(&thread)
	rf.wait_thr(p)

	A a

	p=rf.create_thr(&A.thread,&a)
	rf.wait_thr(p)
}

thread(void* param)
{
	puts param.touint
}

class A
{
	int m_a=2

	thread
	{
		puts m_a
	}
}