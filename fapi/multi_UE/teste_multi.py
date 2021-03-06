import socket
from struct import *
################################################################
# UNPACK:
################################################################
#   BYTE ORDER              SIZE      ALIGNMENT
#@ 	native 	                native 	  native
#= 	native 	                standard 	none
#< 	little-endian 	        standard 	none
#> 	big-endian 	            standard 	none
#! 	network (= big-endian) 	standard 	none
################################################################
#   C TYPE              PYTHON TYPE         SIZE NOTES
#x 	pad byte 	          no value
#c 	char 	              string of length    1 	   1
#b 	signed char 	      integer 	          1 	   (3)
#B 	unsigned char 	    integer 	          1 	   (3)
#? 	_Bool 	            bool 	              1 	   (1)
#h 	short 	            integer 	          2 	   (3)
#H 	unsigned short 	    integer 	          2 	   (3)
#i 	int 	              integer 	          4 	   (3)
#I 	unsigned int 	      integer 	          4 	   (3)
#l 	long 	              integer 	          4 	   (3)
#L 	unsigned long 	    integer 	          4 	   (3)
#q 	long long 	        integer 	          8 	   (2), (3)
#Q 	unsigned long long 	integer 	          8 	   (2), (3)
#f 	float 	            float 	            4 	   (4)
#d 	double 	            float 	            8 	   (4)
#s 	char[] 	            string
#p 	char[] 	            string
#P 	void * 	            integer 	  	             (5), (3)
################################################################

host =''
port = 8888
local = (host,port)

udp=socket.socket(socket.AF_INET,socket.SOCK_DGRAM)
udp.bind(local)

rnti_2 = 0

while True:
  leitor, recebe = udp.recvfrom(65000)

  msg_Id, len_Ven, buff_Length, frame = unpack('>BBHH', leitor[0:6])

  if msg_Id is 135: #133 -> harq
    num_of_pdu = unpack('>H', leitor[6:8])
    print num_of_pdu

    handle, rnti, length, data_offset, timing_advance = unpack('>LHHHH', leitor[8:20])

    print "Handle:",handle
    print "RNTI  :",rnti
    print "Length:",length
    print "Data  :",data_offset
    print "Timing:",timing_advance

if msg_Id is 139:
  rnti_1, length, data_offset, timming_advance, ul_cqi, ri =unpack('>HHHHBB', leitor[12:22]

  if rnti_1 != rnti_2:
    print rnti
    
    rnti_2 = rnti_1

