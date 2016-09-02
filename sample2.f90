program main
  implicit none

  double precision :: a,b
  a = 1.0
  b = func(a)
  print*,'a : ',a
  print*,'b : ',b

contains
  function func(x)
    double precision :: func
    double precision, intent(in) :: x
    func = 2.d0 * x
  end function func

end program main
