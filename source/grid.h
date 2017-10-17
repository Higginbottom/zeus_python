      REAL
     &   x1a (in),  x1b (in),  x2a (jn),  x2b (jn)
     &,  x1ai(in),  x1bi(in),  x2ai(jn),  x2bi(jn)
     &,  x1an(in),  x1bn(in),  x2an(jn),  x2bn(jn)
     &, dx1a (in), dx1b (in), dx2a (jn), dx2b (jn)
     &, dx1ai(in), dx1bi(in), dx2ai(jn), dx2bi(jn)
     &, dx1an(in), dx1bn(in), dx2an(jn), dx2bn(jn)
     &,  g2a (in),  g2b (in), g31a (in), g31b (in), g32a (jn), g32b (jn)
     &,  g2ah(in),  g2bh(in), g31ah(in), g31bh(in), g32ah(jn), g32bh(jn)
     &,  g2an(in),  g2bn(in), g31an(in), g31bn(in), g32an(jn), g32bn(jn)
     &,  g4a (jn),  g4b (jn), g4 ah(jn), g4 bh(jn), g4 an(jn), g4 bn(jn)
     &,  dg2 ad1(in), dg2 bd1(in), dg31ad1(in), dg31bd1(in)
     &,  dg32ad2(jn), dg32bd2(jn)
     &,dvl1a (in),dvl1b (in),dvl2a (jn),dvl2b (jn)
     &                      ,dvl2ah(jn),dvl2bh(jn)
     &,dvl1an(in),dvl1bn(in),dvl2an(jn),dvl2bn(jn)
     &,vfac
     &,   vg1(in),   vg2(jn), x1fac , x2fac 
     &, ppafc1(9,in), ppazc1(8,in), ppafc2(8,jn), ppazc2(8,jn)

      integer
     &   iim2(jn) , iom2(jn) , jim2(in) , jom2(in)
     &,  iim1(jn) , iom1(jn) , jim1(in) , jom1(in)
     &,  ii  (jn) , io  (jn) , ji  (in) , jo  (in)
     &,  iip1(jn) , iop1(jn) , jip1(in) , jop1(in)
     &,  iip2(jn) , iop2(jn) , jip2(in) , jop2(in)
     &            , iop3(jn)            , jop3(in)
     &,  is       , ie       , js       , je  
     &,  nx1 (jn) , nx1z     , nx2 (in) , nx2z
     &,  igcon

      common /gridvarr/  x1a , x1b , x2a , x2b 
     &                 , x1ai, x1bi, x2ai, x2bi
     &                 , x1an, x1bn, x2an, x2bn
     &                 ,dx1a ,dx1b ,dx2a ,dx2b 
     &                 ,dx1ai,dx1bi,dx2ai,dx2bi
     &                 ,dx1an,dx1bn,dx2an,dx2bn
     &                 , g2a , g2b ,g31a ,g31b ,g32a ,g32b
     &                 , g2ah, g2bh,g31ah,g31bh,g32ah,g32bh
     &                 , g2an, g2bn,g31an,g31bn,g32an,g32bn
     &                 , g4a , g4b ,g4 ah,g4 bh,g4 an,g4 bn
     &                 , dg2 ad1, dg2 bd1, dg31ad1, dg31bd1
     &                 , dg32ad2, dg32bd2
     &                 ,dvl1a ,dvl1b ,dvl2a ,dvl2b 
     &                               ,dvl2ah,dvl2bh
     &                 ,dvl1an,dvl1bn,dvl2an,dvl2bn,vfac
     &                 ,vg1,vg2,x1fac,x2fac
     &                 , ppafc1, ppazc1, ppafc2, ppazc2

      common /gridvari/ iim2, iom2, jim2, jom2
     &                 ,iim1, iom1, jim1, jom1
     &                 ,ii  , io  , ji  , jo  
     &                 ,iip1, iop1, jip1, jop1
     &                 ,iip2, iop2, jip2, jop2
     &                      , iop3      , jop3
     &                 ,is  ,   ie,   js,   je
     &                 ,nx1 ,  nx2, nx1z, nx2z
     &                 ,igcon
