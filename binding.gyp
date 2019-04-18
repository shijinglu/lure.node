{
  "targets": [
    {
      "target_name": "lure",
      "sources": [ "node_lure.cc" ],
      "include_dirs": [
        "<!(node -e \"require('nan')\")"
      ]
    }
  ]
}
