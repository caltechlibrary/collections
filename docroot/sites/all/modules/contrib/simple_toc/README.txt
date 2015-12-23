CONTENTS OF THIS FILE
---------------------

 * Introduction


INTRODUCTION
------------

A Simple TOC (Table of Contents) for node text areas.

Setup is per node content type and is enabled by selecting a long text field to
apply the TOC modifications to. Upon 'node loads', the module will parse the
selected field and modify any HTML headers with organised ID numbers. A TOC
'field' is also added to the node, enabling the TOC to be displayed anywhere
(ie used by other modules).

Some advanced options are available, and include;
- Adding the TOC before and/or after the selected field.
- Formatting the TOC as OL, UL and DIV.
- Leverage Ctools to make the TOC collapsible.
- Adding a custom title before the TOC.
- Adding "Back to Top" links before and/or after the content following a HTML
heading.
- Customisable anchor ID's.

In addition to adding the TOC to the field, a Block, Display Suite field
and Panel Pane are provided. This gives site admins a lot of options for
when, where and how to display the TOC.

Simple TOC utilises DOMDocument parsing to configure the field, rather
than RegEx expressions. This provides safer and more-consistent results.
