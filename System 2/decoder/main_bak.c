/**
 * Main program for testing the decoder
 */
#include <stdio.h>
#include "decoder.h"

/*
 * Main
 */
int main()
{
	const char *encoded="h*f2Xf*%XNSvN%RhvRb2R2XfNf*%*SbRffh*v%lXhXl*Rf%l*%2**%Rl%f%XhXf*2l%fNb2hR22Rv%RvSb2f2N%XNl*f2Xb*%*Nh*Nf*b2**ffNR22RR2h*2X%Xff*N2%fSbfNbRllXRNlbRl%fvfhRfv2*N%*2*22Xbl2lh%*hbf%*l2X%X*fNfRvRbf%Rh%*f22Rh*2%Rff*%2f**l%vh%RlS2hShhhXbf%vh%2f2Xb%Rbb%fNvfNl2*2X%hX%XlN*l%b*Rf%X*X2vRv*lvNNf*fff%R2%RlNl2lX2NN*%%2*lX2NlRhRbh*f*NR*h*N%*f*b*fbXfXXX%fXflbvX%bNNSh*22f%Xv%lvvRfhbbffvv*2S*lf2XfhNfNlbb%f*%ll2X%*hf**2bll%h%2hXbfhbf2*NfhNlhv%Xh22hS*NbX*2X%2NbllS2h%2vb*bRXXNl2%h*f*2l%*SbfNRX2b2RbfNb2h2hX2RvXflbfvbRff*NvvSfNlbf2vhvfNbR2Xfv**Nfl%*hRb2R22R2h*l2XSR*%lXN2ffv*2NNX*2XN*X%bN%fhb2h2*XRvSbvfbhhl22bv2f%f%bfSR2Xf**2b2vbXlSRRN*R%2%2h22N2l%2Sf*2fbf2v*S2fX2fvRbbhl2X2fv2RfRNbbfRbbhNb*%b2fh**l22b**R**l%blNl*lS2lXRR%2N*ffv%RhvRXXNv*Nhvv*2%f*2%2vf*f22*2X%%RbbN%***l%hf2Xlf%Rv2*NSRh**f2Xf%RvvXb2Rf*%XNN2f22R*f2f*hvh**l%hlX2*f%R**ffv%2NffR22XRv22vR%l2Nhv*N*%Rl%*f*lNX*X2%bhN*fbfNfh*h*X*lX2hSR**ff*%*f*l*f222N*NN*fbbX%b2bRfbR2R2Xb%Rbb%fN*hhRRXXhS2%fRf*%hNlh*2X%h%fv2RhRbbX%b2RXXNfX%fRb2vRXfRX2fRNfv2*N%h%2*h*222R*h2vR*l*%v2bRlSR2%b*f*hvNhbll%2vf%2NfXXNhv*%hfXX*RX*b%f2%%fR**fXf";

  char decoded[1000];

  decoder(encoded, decoded, sizeof(decoded));
  printf("%s\n", decoded);

  return 0;
}

