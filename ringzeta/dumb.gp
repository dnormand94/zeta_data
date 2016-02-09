dumb(n,m)=
{

	for(k=n,m,
		for(j=1,eulerphi(k),
			write("2001-3000(gp).csv",k","j","newzeta(k,j));
			if(j==eulerphi(k), write("2001-3000(gp).csv",))
		)
	)

};
