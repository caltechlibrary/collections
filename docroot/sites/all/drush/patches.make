core = 7.x
api = 2

# This patch will not apply cleanly; manually changing files is necessary.
# @see https://www.drupal.org/node/2155463
projects[linkit_views][patch][] = "https://www.drupal.org/files/issues/linkit_views-linkit-3x-compatibility-2155463-19.patch"
