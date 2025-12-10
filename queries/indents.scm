; Nodes that introduce a `{ ... }` block:
[
  (workspace_declaration)
  (model_declaration)
  (group_declaration)
  (person_declaration)
  (software_system_declaration)
  (container_declaration)
  (component_declaration)
  (configuration_declaration)
  (views_declaration)
  (system_context_view_declaration)
  (container_view_declaration)
  (dynamic_view_declaration)
  (styles_declaration)
  (element_declaration)
  (relationship_declaration)
] @indent.begin

; Closing braces finish a block and dedent
["}"] @indent.end
["}"] @indent.branch

; Don’t get fancy inside comments/strings
(comment) @indent.auto
(string) @indent.auto
