package tree_sitter_structurizr_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_structurizr "github.com/tree-sitter/tree-sitter-structurizr/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_structurizr.Language())
	if language == nil {
		t.Errorf("Error loading Structurizr grammar")
	}
}
