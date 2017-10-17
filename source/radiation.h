      REAL    c,epsme,demax,dermax,dtotmax,radth,epsrad
      integer ifld,nmeiter,maxrad,ks0rad,iorad
      common /radr/ c,epsme,demax,dermax,dtotmax,radth,epsrad
      common /radi/ ifld,nmeiter,maxrad,ks0rad,iorad
#ifdef RAD
      REAL f11 (in,jn), f22(in,jn), f12(in,jn), dr1(in,jn), dr2(in,jn)
      REAL dv11(in,jn),dv22(in,jn),dv12(in,jn),dv21(in,jn),divv(in,jn)
     &   ,dv33(in,jn),  en(in,jn), ern(in,jn),  de(in,jn), der(in,jn)
     &   , bb (in,jn), kap  (in,jn), sig (in,jn)
     &   ,  pn(in,jn), bbn (in,jn), kapn (in,jn)
     &   ,dpde(in,jn),dbbde(in,jn),dkapde(in,jn),fr1(in,jn),fr2(in,jn)
      common /radr/
     &     f11,   f22,   f12, dr1, dr2, dv11, dv22, dv12, dv21, divv
     &   ,dv33,  en,   ern,    de, der,   bb,  kap,  sig,   pn,  bbn
     &   ,kapn,dpde, dbbde,dkapde, fr1,  fr2
#endif
