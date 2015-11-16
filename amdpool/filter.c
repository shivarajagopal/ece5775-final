#include "filter.h"

void filter_destroy( filterType *pObject )
{
  free( pObject );
}

 void filter_reset( filterType * pThis )
{
  memset( &pThis->state, 0, sizeof( pThis->state ) ); // Reset state to 0
  pThis->output = 0;                  // Reset output

}

 void filter_init( filterType * pThis )
{
  filter_reset( pThis );

}
filterType *filter_create( void )
{
  filterType *result = (filterType *)malloc( sizeof( filterType ) );  // Allocate memory for the object
  filter_init( result );                      // Initialize it
  return result;                                // Return the result
}