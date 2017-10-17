      REAL   d(in,jn),  e(in,jn),  p(in,jn), v1(in,jn), v2(in,jn)
#ifdef PYHYDRO		  
	  REAL   xi(in,jn), e_old(in,jn), c_comp(in,jn),c_xray(in,jn)
	  REAL h_init(in,jn),c_init(in,jn)
	  REAL   d_init(in,jn), h_comp(in,jn),h_xray(in,jn)
	  REAL   c_line(in,jn),c_brem(in,jn),t_old(in,jn),adiab(in,jn)
	  REAL   comp_h_pre(in,jn),comp_c_pre(in,jn)
	  REAL   brem_pre(in,jn),line_pre(in,jn),net_hc(in,jn)
	  REAL   xray_pre(in,jn),heat_tot(in,jn),cool_tot(in,jn)
	  REAL   divv1(in,jn),v1_pdv(in,jn),v2_pdv(in,jn)
	  REAL   dt_csound(in,jn),dt_v1(in,jn),dt_v2(in,jn)
	  REAL   dt_viscosity(in,jn),dt_alfen(in,jn)
#endif
#ifdef ROTATE
      REAL  v3(in,jn)
#endif
#ifdef GRAV
      REAL phi(in,jn)
#endif
#ifdef MHD
      REAL  b1(in,jn), b2(in,jn), b3(in,jn)
#endif
#ifdef RAD
      REAL  er(in,jn) 
#endif

      common /fieldr/  d ,  e,  p, v1, v2
	  common /fieldr/  xi , e_old, t_old,adiab
	  common /fieldr/  d_init,h_init,c_init
	  common /fieldr/  c_comp,c_line,c_brem
	  common /fieldr/  h_comp,h_xray
	  common /fieldr/  comp_c_pre,comp_h_pre
	  common /fieldr/  xray_pre
	  common /fieldr/  line_pre,brem_pre
	  common /fieldr/  net_hc,heat_tot,cool_tot

	  common /fieldr/ divv1,v1_pdv,v2_pdv
	  common /fieldr/ dt_csound,dt_v1,dt_v2,dt_alfen,dt_viscosity
		  
#ifdef ROTATE
      common /fieldr/  v3
#endif
#ifdef GRAV
      common /fieldr/ phi
#endif
#ifdef MHD
      common /fieldr/  b1, b2, b3
#endif
#ifdef RAD
      common /fieldr/  er 
#endif
