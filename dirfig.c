
#include <stdio.h> 
#include <stdlib.h> 
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <dirent.h> //
// for fexist
#include <ctype.h>
#include <sys/stat.h>
#include <dirent.h>
#include <sys/types.h>
#include <unistd.h>  
// time 
#include <time.h>
#include <ncurses.h>

int fexist(char *a_option)
{
  char dir1[PATH_MAX]; 
  char *dir2;
  DIR *dip;
  strncpy( dir1 , "",  PATH_MAX  );
  strncpy( dir1 , a_option,  PATH_MAX  );

  struct stat st_buf; 
  int status; 
  int fileordir = 0 ; 

  status = stat ( dir1 , &st_buf);
  if (status != 0) {
    fileordir = 0;
  }

  // this is compatible to check if a file exists
  FILE *fp2check = fopen( dir1  ,"r");
  if( fp2check ) {
  // exists
  fileordir = 1; 
  fclose(fp2check);
  } 

  if (S_ISDIR (st_buf.st_mode)) {
    fileordir = 2; 
  }
return fileordir;
/////////////////////////////
}


static int compare_fun( const void *p, const void *q)
{
  const char *l = p ; 
  const char *r = q ; 
  int cmp; 
  cmp = strcmp( l, r );
  return cmp; 
}



char *strrmtail(char *str)
{  
      char ptr[strlen(str)+1];
      int ptrsize = strlen(str); 
      int i,j=0;
      for(i=0; str[i]!='\0'; i++)
      {
        if (( ptrsize-1 == i ) && ( str[i] == '/' ))
	{
	}
        else
	{
            ptr[j++]=str[i];
	}
      } 
      ptr[j]='\0';
      size_t siz = 1 + sizeof ptr ; 
      char *r = malloc( 1 +  sizeof ptr );
      return r ? memcpy(r, ptr, siz ) : NULL;
}




int main( int argc, char *argv[])
{
    char cwd[PATH_MAX];
    char cmdi[PATH_MAX];
    strncpy( cwd, "" , PATH_MAX );

    char pathbefore[PATH_MAX];
    strncpy( pathbefore , getcwd( cwd, PATH_MAX ) , PATH_MAX );


      ////////////////////////////////////////////////////////
      if ( argc == 2)
      if ( fexist( argv[1]) ==  2 ) 
      {
	 printf( "[Directory: %s]\n", argv[ 1 ] );
	 chdir( argv[ 1 ] );
      }


    /// selection
    int selection = 0 ; 
    int selectionmax = 0 ; 
    int scrolly=0; 

    //// DIRLIST
    int showhiddenfiles = 0;
    char line[250];
    char filetarget[250];
    char idata[1240][250];
    FILE *fp;
    unsigned filemax = 0;
    unsigned n=0;
    DIR *dirp;
    struct dirent *dp;

   void loadlist(){
    int foo ;
    n = 0 ; 
    filemax = 0; 
    dirp = opendir( "." );
    //strncpy( idata[ n++ ] , ".." , 250 );
    while  ((dp = readdir( dirp )) != NULL  &&  
            n < sizeof idata / sizeof idata[ 0 ]) {
            //if ( strcmp( dp->d_name , "." ) != 0 )
            //if ( ( showhiddenfiles == 0 ) && ( dp->d_name[0] != '.' ) )
            if ( ( showhiddenfiles == 0 ) && ( dp->d_name[0] != '.' ) )
            {
              strncpy( idata[ n++ ] , dp->d_name , 250 );
            }
    }
    filemax = n-1 ; 
    closedir( dirp );

    if ( n > 1 )
      qsort( idata, n , sizeof idata[0], compare_fun );

    for( n = 0 ; n <= filemax ; n++)
    {
       //printf( "%s\n" , idata[ n ] );
    }
    selectionmax = filemax ;
    if ( selection >= selectionmax ) selection = 0;
   }


   if ( argc == 2)
      if ( strcmp( argv[1] , "" ) !=  0 ) 
      if ( fexist( argv[1] )  == 1 ) 
      {
           /////////////
           loadlist();
      }

    loadlist();
    for( n = 0 ; n <= filemax ; n++)
    {
       printf( "%s\n" , idata[ n ] );
    }


    // create dirfig.lst
    printf( "[Directory: %s]\n", argv[ 1 ] );
    chdir( pathbefore );

    char fileoutput[PATH_MAX];
    strncpy( fileoutput, "dir" , PATH_MAX );
    strncat( fileoutput , "-" , PATH_MAX - strlen( fileoutput ) -1 );
    strncat( fileoutput , strrmtail( argv[ 1 ] )    , PATH_MAX - strlen( fileoutput ) -1 );
    strncat( fileoutput , ".lst" , PATH_MAX - strlen( fileoutput ) -1 );

    printf( "Create list file (lst) %s.\n", fileoutput );
    fp = fopen( fileoutput , "wb" );
    fclose( fp );
    for( n = 0 ; n <= filemax ; n++)
    {
       printf( "=> Adding %s to %s.\n" , idata[ n ] , fileoutput );
       fp = fopen( fileoutput , "ab" );
       fputs( "!fig{", fp );
       fputs( argv[ 1 ] , fp );
       fputs( idata[n], fp );
       fputs( "}", fp );
       fputs( "\n", fp );
       fclose( fp );
    }


    printf( "Create listfig.lst\n" );
    fp = fopen( "listfig.lst" , "wb" );
    fclose( fp );
    for( n = 0 ; n <= filemax ; n++)
    {
       printf( "=> Adding %s\n" , idata[ n ] );
       fp = fopen( "listfig.lst" , "ab" );
       fputs( argv[ 1 ] , fp );
       fputs( idata[n], fp );
       fputs( "\n", fp );
       fclose( fp );
    }


    return 0; 
 }

