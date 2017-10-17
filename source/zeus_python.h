	INTEGER n_lu_temp,n_lu_xi
	
	REAL, dimension(nt,nxi) :: hc_lu
	REAL, dimension(nt,nxi) :: comp_h_lu
	REAL, dimension(nt,nxi) :: comp_c_lu
	REAL, dimension(nt,nxi) :: line_c_lu
	REAL, dimension(nt,nxi) :: xray_h_lu
	REAL, dimension(nt,nxi) :: brem_c_lu
	REAL, dimension(nt,nxi) :: cool_lu	
	REAL, dimension(nt,nxi) :: heat_lu		
		
		
		
		
	REAL, dimension(nxi) :: lu_xi
	REAL, dimension(nt) ::lu_temp
	REAL, dimension(nxi) :: log_lu_xi
	REAL, dimension(nt) ::log_lu_temp
		
	LOGICAL main_heatcool,indiv_heatcool,split_heatcool


	common /lookup_data/ n_lu_temp,n_lu_xi,hc_lu,lu_xi,lu_temp,
     +  comp_h_lu,comp_c_lu,line_c_lu,xray_h_lu,brem_c_lu,
     +  main_heatcool,indiv_heatcool,log_lu_xi,log_lu_temp,
     +  cool_lu,heat_lu,split_heatcool