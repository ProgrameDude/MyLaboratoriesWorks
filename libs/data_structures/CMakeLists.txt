add_library(data_structures
        vector/vector.c
        vector/vectorVoid.c
        matrix/matrix.c
        string/string_.c
        string/string_.h
        flow/flow.c
        tasks20/tasks20.c
)

target_link_libraries(data_structures algorithms)