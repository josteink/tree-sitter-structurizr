;; --------------------
;; Comments & literals
;; --------------------

(comment) @comment

(number) @number
(string) @string

(class_value) @type
(path_value) @string.special
(url_value) @string.special
(color) @constant

(wildcard_identifier) @constant.builtin

;; -------------
;; Punctuation
;; -------------

[
  "{"
  "}"
] @punctuation.bracket

[
  "="
  "->"
] @operator

;; -------------
;; Keywords
;; -------------
[
  "workspace"
  "!identifiers"
  "name"
  "description"
  "!docs"
  "!adrs"
  "model"
  "group"
  "person"
  "softwaresystem"
  "container"
  "component"
  "configuration"
  "scope"
  "views"
  "systemcontext"
  "dynamic"
  "include"
  "exclude"
  "autolayout"
  "default"
  "styles"
  "theme"
  "themes"
  "element"
  "relationship"
  "tag"
  "tags"
  "url"
] @keyword

; autolayout directions
[
  "lr"
  "rl"
  "tb"
  "bt"
] @keyword

;; --------------------
;; Identifiers / names
;; --------------------

; Generic identifiers = variables / symbols
(identifier) @variable

; Accessor (i.e. object.property)
(dotted_identifier
  (identifier) @type)

; Variables defined in the model
(variable_declaration
  name: (identifier) @variable)

; Relation endpoints
(relation_statement
  source: (relation_identifier) @type
  target: (relation_identifier) @type
  relation: (string) @string.special)

; Element & relationship styles – property keys
(element_property
  key: (identifier) @property)

; Tags
(tag_declaration
  (string) @constant)

(tags_declaration
  (string) @constant)

; Theme names / paths
(theme_value
  (string) @string.special)

;; --------------------
;; High-level constructs
;; --------------------

(workspace_declaration
  "workspace" @keyword
  (string) @string)

(model_declaration
  "model" @keyword)

(configuration_declaration
  "configuration" @keyword)

(views_declaration
  "views" @keyword)

(styles_declaration
  "styles" @keyword)

(system_context_view_declaration
  "systemcontext" @keyword
  context: (identifier) @type)

(container_view_declaration
  "container" @keyword
  context: (identifier) @type)

(dynamic_view_declaration
  "dynamic" @keyword
  scope: (_) @type)

(group_declaration
  "group" @keyword
  name: (string) @string)

(person_declaration
  "person" @keyword
  name: (string) @string)

(software_system_declaration
  "softwaresystem" @keyword
  name: (string) @string)

(container_declaration
  "container" @keyword
  name: (string) @string)

(component_declaration
  "component" @keyword
  name: (string) @string)

;; --------------------
;; View-level statements
;; --------------------

(include_statement
  "include" @keyword
  [
    (identifier)
    (dotted_identifier)
    (wildcard_identifier)
  ] @variable)

(exclude_statement
  "exclude" @keyword
  [
    (identifier)
    (dotted_identifier)
  ] @variable)

(autolayout_statement
  "autolayout" @keyword
  (autolayout_value) @keyword
  (number)? @number
  (number)? @number)

(default_statement
  "default" @keyword)

(description_statement
  "description" @keyword
  (string) @string)

(url_declaration
  "url" @keyword
  (url_value) @string.special)

(docs_statement
  "!docs" @keyword
  (path_value) @string.special)

(adrs_statement
  "!adrs" @keyword
  (path_value) @string.special)
