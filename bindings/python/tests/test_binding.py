from unittest import TestCase

import tree_sitter, tree_sitter_structurizr


class TestLanguage(TestCase):
    def test_can_load_grammar(self):
        try:
            tree_sitter.Language(tree_sitter_structurizr.language())
        except Exception:
            self.fail("Error loading Structurizr grammar")
