#' @useDynLib ci.package, .registration = TRUE

#' @export
my_minimum <- function(a, b) {
    my_minimum_cpp(a, b)
}