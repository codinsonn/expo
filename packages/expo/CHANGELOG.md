# Changelog

## Unpublished

### 🛠 Breaking changes

### 🎉 New features

### 🐛 Bug fixes

- Fixed `LottieAnimationViewManager isn't supported in Expo Go` error when running with `lottie-react-native`. ([#19439](https://github.com/expo/expo/pull/19439) by [@kudo](https://github.com/kudo))

### 💡 Others

## 47.0.0-alpha.1 — 2022-10-06

### 🛠 Breaking changes

- Drop `expo-error-recovery` and `exp.errorRecovery` root component props (unimplemented outside of classic build service). ([#19132](https://github.com/expo/expo/pull/19132) by [@EvanBacon](https://github.com/EvanBacon))
- Bumped iOS deployment target to 13.0 and deprecated support for iOS 12. ([#18873](https://github.com/expo/expo/pull/18873) by [@tsapeta](https://github.com/tsapeta))

### 🎉 New features

- Re-export `@expo/config-plugins` and `@expo/config` from this package to make it easier for plugins to align on a single version through a peer dependency. ([#18855](https://github.com/expo/expo/pull/18855) by [@brentvatne](https://github.com/brentvatne))
- Drop unused `console.warn` and `console.error` wrappers. ([#18983](https://github.com/expo/expo/pull/18983) by [@EvanBacon](https://github.com/EvanBacon))
- Added capability to throw an error for missing native modules (and `disable-missing-native-module-errors` import to disable this). ([#18465](https://github.com/expo/expo/pull/18465) by [@esamelson](https://github.com/esamelson))
- Added `getNativeModuleIfExists`. ([#18913](https://github.com/expo/expo/pull/18913) by [@esamelson](https://github.com/esamelson))

### 🐛 Bug fixes

- Fixed native entry resolving in release builds when the `app.config.js` has console logs. ([#18906](https://github.com/expo/expo/pull/18906) by [@EvanBacon](https://github.com/EvanBacon))
- Fixed `FabricUIManager` errors when turning on new architecture mode on Android. ([#18472](https://github.com/expo/expo/pull/18472) by [@kudo](https://github.com/kudo))
- Added more modules to blacklist for missing native modules errors. ([#18892](https://github.com/expo/expo/pull/18892) by [@esamelson](https://github.com/esamelson))

### 💡 Others

- Remove `AppRegistry.setWrapperComponentProvider` in favor of `registerRootComponent`. ([#18984](https://github.com/expo/expo/pull/18984) by [@EvanBacon](https://github.com/EvanBacon))
- Add `@expo/config-plugins` dependency for packages that have a peer dependency on `expo`. ([#18595](https://github.com/expo/expo/pull/18595) by [@EvanBacon](https://github.com/EvanBacon))
- Convert `DevAppContainer` to functional React component. ([#18597](https://github.com/expo/expo/pull/18597) by [@EvanBacon](https://github.com/EvanBacon))

### ⚠️ Notices

- Added support for React Native 0.70.x. ([#19261](https://github.com/expo/expo/pull/19261) by [@kudo](https://github.com/kudo))

## 46.0.1 — 2022-07-25

_This version does not introduce any user-facing changes._

## 46.0.0 — 2022-07-25

_This version does not introduce any user-facing changes._

## 46.0.0-beta.7 — 2022-07-25

### 🎉 New features

- Added a feature to automatically generate `.xcode.env.local` with correct `$NODE_BINARY` path when running `pod install`. ([#18330](https://github.com/expo/expo/pull/18330) by [@kudo](https://github.com/kudo))

## 46.0.0-beta.6 — 2022-07-19

_This version does not introduce any user-facing changes._

## 46.0.0-beta.5 — 2022-07-19

_This version does not introduce any user-facing changes._

## 46.0.0-beta.4 — 2022-07-19

_This version does not introduce any user-facing changes._

## 46.0.0-beta.3 — 2022-07-19

_This version does not introduce any user-facing changes._

## 46.0.0-beta.2 — 2022-07-18

_This version does not introduce any user-facing changes._

## 46.0.0-beta.1 — 2022-07-16

_This version does not introduce any user-facing changes._

## 46.0.0-alpha.3 — 2022-07-11

_This version does not introduce any user-facing changes._

## 46.0.0-alpha.2 — 2022-07-08

_This version does not introduce any user-facing changes._

## 46.0.0-alpha.1 — 2022-07-08

_This version does not introduce any user-facing changes._

## 46.0.0-alpha.0 — 2022-07-07

### 🎉 New features

- Added web support and bundle splitting support to `DevLoadingView`. ([#17714](https://github.com/expo/expo/pull/17714) by [@EvanBacon](https://github.com/EvanBacon))
- Add `ExpoErrorManager` to improve some commonly logged error messages. ([#18064](https://github.com/expo/expo/pull/18064) by [@esamelson](https://github.com/esamelson))

### 🐛 Bug fixes

- On Android fixed `onActivityResult` not being propagated by `ReactDelegate` when Android decides to kill and then recreate application `Activity` when low on resources. ([#17572](https://github.com/expo/expo/pull/17572)) by [@bbarthec](https://github.com/bbarthec))
- Fixed `Unable to deactivate keep awake. However, it probably is deactivated already` unhandled promise rejection warning when resuming apps on Android. ([#17319](https://github.com/expo/expo/pull/17319) by [@kudo](https://github.com/kudo))
- Added support for React Native 0.69.x ([#17629](https://github.com/expo/expo/pull/17629) and [#18006](https://github.com/expo/expo/pull/18006) by [@kudo](https://github.com/kudo))

### 📚 3rd party library updates

- Update react-native dependency to 0.68.2. ([#17438](https://github.com/expo/expo/pull/17438) by [@kudo](https://github.com/kudo))

## 45.0.0-beta.9 — 2022-04-28

_This version does not introduce any user-facing changes._

## 45.0.0-beta.8 — 2022-04-27

_This version does not introduce any user-facing changes._

## 45.0.0-beta.7 — 2022-04-27

### 🐛 Bug fixes

- Forward CLI exit code to process. ([#17189](https://github.com/expo/expo/pull/17189) by [@EvanBacon](https://github.com/EvanBacon))

## 45.0.0-beta.6 — 2022-04-27

_This version does not introduce any user-facing changes._

## 45.0.0-beta.5 — 2022-04-25

### 🐛 Bug fixes

- Fix `Overwriting fontFamily style attribute preprocessor` warning when startup. ([#17138](https://github.com/expo/expo/pull/17138) by [@Kudo](https://github.com/Kudo))

## 45.0.0-beta.4 — 2022-04-21

_This version does not introduce any user-facing changes._

## 45.0.0-beta.3 — 2022-04-21

_This version does not introduce any user-facing changes._

## 45.0.0-beta.2 — 2022-04-20

### 🎉 New features

- Add `ReactNativeHostHandler.getUseDeveloperSupport()` to allow `expo-dev-launcher` to override this value at runtime. ([#17069](https://github.com/expo/expo/pull/17069) by [@esamelson](https://github.com/esamelson))

## 45.0.0-beta.1 — 2022-04-18

### 🎉 New features

- Add `EXPO_USE_BETA_CLI` to utilize the new `@expo/cli` versioned package. ([#17007](https://github.com/expo/expo/pull/17007) by [@EvanBacon](https://github.com/EvanBacon))
- Added Android `ReactNativeHostHandler.getJavaScriptExecutorFactory()` for a module to override the `JavaScriptExecutorFactory`. ([#17005](https://github.com/expo/expo/pull/17005) by [@kudo](https://github.com/kudo))
- Add `react`, `react-native`, `react-dom`, and `react-native-web` to `bundledNativeModules.json`. ([#17048](https://github.com/expo/expo/pull/17048) by [@EvanBacon](https://github.com/EvanBacon))
