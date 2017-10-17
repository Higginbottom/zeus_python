      REAL
     . b1floor   ,b2floor   ,b3floor   ,ciso      
     .,courno    ,dfloor
     .,dt        ,dtal      ,dtcs      ,dtdump 
     .,dthdf     ,dthist    ,dtmin     ,dtnew
     .,dtqq      ,dtqqi2 
     .,dtusr     ,dtv1      ,dtv2 
     .,efloor    ,emffloor  ,erfloor   ,gamma
     .,qcon      ,qlin 
     .,tdump
     .,thdf      ,thist     ,time      ,tlim
     .,trem 
     .,tused     ,tusr
     .,v1floor   ,v2floor   ,v3floor 

      integer
     . ifsen 
     .,iordb1    ,iordb2    ,iordb3    ,iordd
     .,iorde     ,iorder    ,iords1    ,iords2
     .,iords3
     .,istpb1    ,istpb2    ,istpb3    ,istpd     ,istpe     ,istper
     .,istps1    ,istps2    ,istps3
     .,isymm
     .,ix1x2 
     .,nhy
     .,nlim      ,nred
     .,nwarn

      common /rootr/ 
     . b1floor ,b2floor ,b3floor ,ciso    ,courno
     .,dfloor
     .,dt      ,dtal    ,dtcs    ,dtdump  ,dthdf
     .,dthist  ,dtmin   ,dtnew 
     .,dtqq    ,dtqqi2  ,dtusr   ,dtv1    ,dtv2
     .,efloor  ,emffloor,erfloor ,gamma
     .,qcon    ,qlin
     .,tdump   ,thdf    ,thist
     .,time    ,tlim    ,trem
     .,tused   ,tusr    ,v1floor ,v2floor
     .,v3floor

      common /rooti/ 
     . ifsen
     .,iordb1  ,iordb2
     .,iordb3  ,iordd   ,iorde   ,iorder  ,iords1
     .,iords2  ,iords3 
     .,istpb1  ,istpb2  ,istpb3  ,istpd   ,istpe   ,istper
     .,istps1  ,istps2  ,istps3
     .,isymm   ,ix1x2
     .,nhy
     .,nlim    ,nred
     .,nwarn

      character*8  id
      character*18  hdffile, hstfile, resfile, usrfile
      common /chroot2/  id
      common /chroot1/  hdffile, hstfile, resfile, usrfile
