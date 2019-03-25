nclude <stdio.h>
/**
 * Decode an encoded string into a character stream.
 * @param encoded The input string we are decoding
 * @param decoded The output string we produce
 * @param maxLen The maximum size for decoded
 */
void decoder( const char *encoded, char * decoded, int maxLen)
{
	//set all the bits in decoded to 0 (project page)

  unsigned int i =0;
	for( i=0; i < maxLen; i++){
		decoded[i] =0;
	}
	int bit=0;
	for(; *encoded; encoded++){
	
	switch(*encoded){
		case ‘X’:
		    setBit(decoded , maxLen, bit++);
		    setBit(decoded , maxLen, bit++);
		    setBit(decoded , maxLen, bit++);
		    break;
		
	  case ‘R’:
		    setBit(decoded , maxLen, bit++);
		    setBit(decoded , maxLen, bit++);
		    bit++;
		    break;
		    
		    
		 case ‘l’:
		    setBit(decoded , maxLen, bit++);
		    bit++;
		    setBit(decode, maxLen, bit++);
		    break;
		
		 case ‘b’:
		    setBit(decoded , maxLen, bit++);
		    bit++;
		    bit++;
		    break;
		    
			case ‘h’:
		    bit++;
		    setBit(decoded , maxLen, bit++);
		    setBit(decoded , maxLen, bit++);
		    break;
		    
			case ‘v’:
		    bit++;
		    setBit(decoded , maxLen, bit++);
		    bit++;
		    break;
		    
			case ‘N’:
		    bit++;
		    bit++;
		    setBit(decoded , maxLen, bit++);
		    break;
		    
		    case ‘S’:
		    bit++;
		    bit++;
		    bit++;
		    break;
		    
		    case ‘2’:
		    setBit(decoded , maxLen, bit++);
		    setBit(decoded , maxLen, bit++);
		    break;
		    
		    case ‘f’:
		    setBit(decoded , maxLen, bit++);
		    bit++;
		    break;
		    
		    case ‘*’:
		    bit++;
		    setBit(decoded , maxLen, bit++);
		    break;
		    
		    case ‘%’:
		    bit++;
		    bit++;
		    break;
	    }		  
	}

}

/**
 * @param decoded the char we are decoding
 * @param bit The bit
 * @param maxLen The maximum size for decoded
 */
    void setBit(char * decoded, int maxLen, int bit){
        int byte = bit/8;
        int shift = 7-(bit%8);
        if(byte < maxLen){
            decoded[byte] |=1 << shift;
        }
    }
		

