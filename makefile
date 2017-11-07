LIBS = True

LIBPATH=$(ZEUSPY)/lib

ZLIB=$(ZEUSPY)/external/zlib-1.2.11
JPEG=$(ZEUSPY)/external/jpeg-9b
HDF4=$(ZEUSPY)/external/hdf-4.2.13


ifeq (True, $(LIBS))
	INSTALL_ZLIB = cd $(ZLIB); ./configure --prefix=$(LIBPATH)/zlib; make; make install;
	INSTALL_JPEG = cd $(JPEG); ./configure --prefix=$(LIBPATH)/jpeg; make; make install;
	INSTALL_HDF4 = cd $(HDF4); ./configure  --with-zlib=$(LIBPATH)/zlib/  --with-jpeg=$(LIBPATH)/jpeg/ --prefix=$(LIBPATH)/hdf4; make; make install;
	
endif

MAKE_SOURCE = cd $(ZEUSPY)/source; make compile;


install:
	$(INSTALL_ZLIB)	
	$(INSTALL_JPEG)
	$(INSTALL_HDF4)
	
	$(MAKE_SOURCE)
	
	
clean: 
	cd $(ZLIB); make clean;  
	cd $(JPEG); make clean;  
	cd $(HDF4); make clean;  
	cd $(ZEUSPY)/source/; make clean	
	
	
# actually removes the compiled libraries
rm_lib:
	rm -rf $(LIBPATH)/*
