#pragma once

#include <QString>

namespace Override {

/** This creates a file in `parent_folder` that holds information about which
 *  overrides are in `override_path`.
 *
 *  If there's already an existing such file, it will be ovewritten.
 */
void createOverrides(QString name, QString parent_folder, QString override_path);

/** This reads an existing overrides archive, returning a list of overrides.
 *
 *  If there's no such file in `parent_folder`, it will return an empty list.
 */
QStringList readOverrides(QString name, QString parent_folder);

}  // namespace Override
