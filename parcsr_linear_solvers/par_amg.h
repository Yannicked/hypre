/*BHEADER**********************************************************************
 * (c) 1998   The Regents of the University of California
 *
 * See the file COPYRIGHT_and_DISCLAIMER for a complete copyright
 * notice, contact person, and disclaimer.
 *
 * $Revision$
 *********************************************************************EHEADER*/

#ifndef hypre_ParAMG_DATA_HEADER
#define hypre_ParAMG_DATA_HEADER

/*--------------------------------------------------------------------------
 * hypre_ParAMGData
 *--------------------------------------------------------------------------*/

typedef struct
{

   /* setup params */
   int      max_levels;
   double   strong_threshold;
   int      interp_type;

   /* solve params */
   int      max_iter;
   int      cycle_type;    
   int     *num_grid_sweeps;  
   int     *grid_relax_type;   
   int    **grid_relax_points; 
   double   tol;

   /* problem data */
   hypre_ParCSRMatrix  *A;
   int      num_variables;
   int      num_unknowns;
   int      num_points;
   int     *unknown_map;
   int     *point_map;
   int     *v_at_point;           

   /* data generated in the setup phase */
   hypre_ParCSRMatrix **A_array;
   hypre_ParCSRMatrix **P_array;
   int                **CF_marker_array;
   int                **unknown_map_array;
   int                **point_map_array;
   int                **v_at_point_array;
   int                  num_levels;

   /* data generated in the solve phase */
   hypre_ParVector   *Vtemp;
   hypre_Vector      *Vtemp_local;
   double            *Vtemp_local_data;
   int                cycle_op_count;                                                   

   /* output params */
   int      ioutdat;
   char     log_file_name[256];

} hypre_ParAMGData;

/*--------------------------------------------------------------------------
 * Accessor functions for the hypre_AMGData structure
 *--------------------------------------------------------------------------*/

/* setup params */
		  		      
#define hypre_ParAMGDataMaxLevels(amg_data) ((amg_data)->max_levels)
#define hypre_ParAMGDataStrongThreshold(amg_data) ((amg_data)->strong_threshold)
#define hypre_ParAMGDataInterpType(amg_data) ((amg_data)->interp_type)

/* solve params */

#define hypre_ParAMGDataMaxIter(amg_data) ((amg_data)->max_iter)
#define hypre_ParAMGDataCycleType(amg_data) ((amg_data)->cycle_type)
#define hypre_ParAMGDataTol(amg_data) ((amg_data)->tol)
#define hypre_ParAMGDataNumGridSweeps(amg_data) ((amg_data)->num_grid_sweeps)
#define hypre_ParAMGDataGridRelaxType(amg_data) ((amg_data)->grid_relax_type)
#define hypre_ParAMGDataGridRelaxPoints(amg_data) ((amg_data)->grid_relax_points)

/* problem data parameters */
#define  hypre_ParAMGDataNumVariables(amg_data)  ((amg_data)->num_variables)
#define hypre_ParAMGDataNumUnknowns(amg_data) ((amg_data)->num_unknowns)
#define hypre_ParAMGDataNumPoints(amg_data) ((amg_data)->num_points)
#define hypre_ParAMGDataUnknownMap(amg_data) ((amg_data)->unknown_map)
#define hypre_ParAMGDataPointMap(amg_data) ((amg_data)->point_map)
#define hypre_ParAMGDataVatPoint(amg_data) ((amg_data)->v_at_point)

/* data generated by the setup phase */
#define hypre_ParAMGDataCFMarkerArray(amg_data) ((amg_data)-> CF_marker_array)
#define hypre_ParAMGDataAArray(amg_data) ((amg_data)->A_array)
#define hypre_ParAMGDataPArray(amg_data) ((amg_data)->P_array)
#define hypre_ParAMGDataUnknownMapArray(amg_data) ((amg_data)->unknown_map_array) 
#define hypre_ParAMGDataPointMapArray(amg_data) ((amg_data)->point_map_array) 
#define hypre_ParAMGDataVatPointArray(amg_data) ((amg_data)->v_at_point_array)
#define hypre_ParAMGDataNumLevels(amg_data) ((amg_data)->num_levels)	
      
/* data generated in the solve phase */
#define hypre_ParAMGDataVtemp(amg_data) ((amg_data)->Vtemp)
#define hypre_ParAMGDataVtempLocal(amg_data) ((amg_data)->Vtemp_local)
#define hypre_ParAMGDataVtemplocalData(amg_data) ((amg_data)->Vtemp_local_data)
#define hypre_ParAMGDataCycleOpCount(amg_data) ((amg_data)->cycle_op_count)

/* output parameters */
#define hypre_ParAMGDataIOutDat(amg_data) ((amg_data)->ioutdat)
#define hypre_ParAMGDataLogFileName(amg_data) ((amg_data)->log_file_name)

#endif



