include(cmake/CPM.cmake)

function(myproject_setup_dependencies)
    # For each dep, check it's already provided to us by parents
    if(NOT TARGET fmtlib::fmtlib)
        cpmaddpackage("gh:fmtlib/fmt#9.1.0")
    endif()

    cpmaddpackage(
        NAME googletest
        GITHUB_REPOSITORY google/googletest
        GIT_TAG release-1.12.1
        VERSION 1.12.1
        OPTIONS "INSTALL_GTEST OFF" "gtest_force_shared_crt"
    )
endfunction(myproject_setup_dependencies)
