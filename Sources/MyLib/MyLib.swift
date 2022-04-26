import CXXImpl

extension Life: Equatable {
    public static func == (lhs: Life, rhs: Life) -> Bool {
        lhs.life == rhs.life
    }
}

extension Life: Hashable {
    public func hash(into hasher: inout Hasher) {
        hasher.combine(life)
    }
}

public struct CXXTest {
    
    public init() {}
    
    public func run() -> Int32 {
        var life = Life()
        doSomethingWithLife(&life)
        print("life", life)
        life.life = 12
        
        print("life", life)
        return my_function(10, 2)
    }
}
