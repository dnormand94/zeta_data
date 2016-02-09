newzeta(n,m)=
{
	var1=0;
	if(m>eulerphi(n),m=(m%eulerphi(n)));
	for(k=1,n-1,
		if(gcd(k,n)==1,
			var1=(var1+k^m)%n;
		);
	);

	return(var1)
};
