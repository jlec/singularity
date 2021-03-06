/* 
 * Copyright (c) 2016, Michael W. Bauer. All rights reserved.
 * 
 * “Singularity” Copyright (c) 2016, The Regents of the University of California,
 * through Lawrence Berkeley National Laboratory (subject to receipt of any
 * required approvals from the U.S. Dept. of Energy).  All rights reserved.
 * 
 * This software is licensed under a customized 3-clause BSD license.  Please
 * consult LICENSE file distributed with the sources of this project regarding
 * your rights to use or distribute this software.
 * 
 * NOTICE.  This Software was developed under funding from the U.S. Department of
 * Energy and the U.S. Government consequently retains certain rights. As such,
 * the U.S. Government has been granted for itself and others acting on its
 * behalf a paid-up, nonexclusive, irrevocable, worldwide license in the Software
 * to reproduce, distribute copies to the public, prepare derivative works, and
 * perform publicly and display publicly, and to permit other to do so. 
 * 
 */

#ifndef __SINGULARITY_BOOTSTRAP_H_
#define __SINGULARITY_BOOTSTRAP_H_
    
    int singularity_bootstrap(char *containerimage, char *bootdef_path);
    void singularity_bootstrap_script_run(char *section_name);

    int bootstrap_module_init();
    int bootstrap_rootfs_install();
    int bootstrap_copy_script(char *section_name, char *dest_path);

    extern int singularity_bootstrap_docker();
    extern int singularity_bootstrap_yum();
    extern int singularity_bootstrap_debootstrap();
    extern int singularity_bootstrap_busybox();
    extern int singularity_bootstrap_arch();

#endif
