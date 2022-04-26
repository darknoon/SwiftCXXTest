import CXXImpl

public struct CXXTest {
    
    func run() -> Int32 {
        var life = CXXImpl.Life()
        print("life", life)
        life.my_life = 12
        print("life", life)
        return CXXImpl.my_function(10, 2)
    }
}
