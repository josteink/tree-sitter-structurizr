# tree-sitter-structurizr

[Structurizr](https://structurizr.com) DSL grammar for
[tree-sitter](https://github.com/tree-sitter/tree-sitter),
for [C4 Architecture modelling](https://c4model.com).

Adapted from [the official spec](https://docs.structurizr.com/dsl/language).


## current state

Under development. Incomplete. Possibly unstable.

Not recommended for production use, but patches/improvements welcome.

"Supported" editors, as in editors it has been tested in with various
degrees of success:

- [GNU Emacs](https://www.gnu.org/software/emacs/) via
  [scrutrurizr-ts-mode](https://github.com/josteink/structurizr-ts-mode).
- [Neovim](https://neovim.io) - manual setup required.


## Neovim Setup

1. Install `nvim-treesitter/nvim-treesitter` using your package manager of choice (make sure to specify the `main` branch of this package, and not the default `master` branch).
2. Add the following to `lua/config/autocmds.lua`:

```lua
vim.filetype.add({
  extension = {
    dsl = "structurizr",
  }
})

vim.api.nvim_create_autocmd('FileType', {
  pattern = { "structurizr" },
  callback = function(args)
    vim.treesitter.start(args.buf, 'structurizr')
  end,
})

vim.api.nvim_create_autocmd('User', { pattern = 'TSUpdate',
  callback = function()
    require('nvim-treesitter.parsers').structurizr = {
      install_info = {
        url = 'https://github.com/josteink/tree-sitter-structurizr',
        branch = 'master',
        queries = 'queries'
      },
    }
  end
})
```

3. Restart Neovim and run `:TSInstall structurizr`

> [!NOTE]
> Tested using LazyVim.


## contributing / development

If you want to contribute you will (at least) need:

- `GNU make` or other compatible make-version.
- `tree-sitter-cli`: This can usually be installed with your system
  package-manager, or `brew` on MacOS. Provided through NPM, but might
  be handy to have available for more ad-hoc testing and tasks!

With those in place, working with the grammar should be fairly simple:

- add test-case to `test/corpus/test.txt`
- modify `grammar.js` to change grammar.
- verify with `make test`.
- when done, commit all files (`parser.c`, etc).

PRs welcome! Please be kind and make PRs small enough
(feature-scoped?) to be possible to review and merge without
significant risk of merge-conflicts.
