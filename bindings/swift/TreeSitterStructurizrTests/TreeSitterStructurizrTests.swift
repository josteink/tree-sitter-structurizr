import XCTest
import SwiftTreeSitter
import TreeSitterStructurizr

final class TreeSitterStructurizrTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_structurizr())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Structurizr grammar")
    }
}
