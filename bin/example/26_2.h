class A
{
	int* m_p
	
	A()
	{
		m_p=r_new<int>5	
	}
	
	A(A& a)
	{
		m_p=r_new<int>5
		for i=0 to 4
			m_p[i]=a.m_p[i]
	}
	
	~A()
	{
		if m_p!=null
			r_delete<int>m_p
			m_p=null
	}
	
	operator=(A& a)
	{
		this.~A
		this.A(a)
	}
}

void main()
{
	A a
	a.m_p[1]=2
	a.m_p[1].print
	b=a
	b.m_p[1].print
}
