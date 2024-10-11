#include <QtQml/qqmlprivate.h>
#include <QtCore/qdir.h>
#include <QtCore/qurl.h>
#include <QtCore/qhash.h>
#include <QtCore/qstring.h>

namespace QmlCacheGeneratedCode {
namespace _0x5f_Lectron_qml_main_qml { 
    extern const unsigned char qmlData[];
    extern const QQmlPrivate::TypedFunction aotBuiltFunctions[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), &aotBuiltFunctions[0], nullptr
    };
}
namespace _0x5f_Lectron_qml_FlyView_qml { 
    extern const unsigned char qmlData[];
    extern const QQmlPrivate::TypedFunction aotBuiltFunctions[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), &aotBuiltFunctions[0], nullptr
    };
}
namespace _0x5f_Lectron_qml_FlyViewToolBar_qml { 
    extern const unsigned char qmlData[];
    extern const QQmlPrivate::TypedFunction aotBuiltFunctions[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), &aotBuiltFunctions[0], nullptr
    };
}
namespace _0x5f_Lectron_qml_FlyViewWidgetLayer_qml { 
    extern const unsigned char qmlData[];
    extern const QQmlPrivate::TypedFunction aotBuiltFunctions[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), &aotBuiltFunctions[0], nullptr
    };
}
namespace _0x5f_Lectron_qml_SettingsPage_qml { 
    extern const unsigned char qmlData[];
    extern const QQmlPrivate::TypedFunction aotBuiltFunctions[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), &aotBuiltFunctions[0], nullptr
    };
}
namespace _0x5f_Lectron_qml_VehiclePage_qml { 
    extern const unsigned char qmlData[];
    extern const QQmlPrivate::TypedFunction aotBuiltFunctions[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), &aotBuiltFunctions[0], nullptr
    };
}
namespace _0x5f_Lectron_qml_TakeoffPage_qml { 
    extern const unsigned char qmlData[];
    extern const QQmlPrivate::TypedFunction aotBuiltFunctions[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), &aotBuiltFunctions[0], nullptr
    };
}
namespace _0x5f_Lectron_qml_BombPage_qml { 
    extern const unsigned char qmlData[];
    extern const QQmlPrivate::TypedFunction aotBuiltFunctions[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), &aotBuiltFunctions[0], nullptr
    };
}
namespace _0x5f_Lectron_qml_VehicleModePage_qml { 
    extern const unsigned char qmlData[];
    extern const QQmlPrivate::TypedFunction aotBuiltFunctions[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), &aotBuiltFunctions[0], nullptr
    };
}
namespace _0x5f_Lectron_qml_EmptyPage_qml { 
    extern const unsigned char qmlData[];
    extern const QQmlPrivate::TypedFunction aotBuiltFunctions[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), &aotBuiltFunctions[0], nullptr
    };
}

}
namespace {
struct Registry {
    Registry();
    ~Registry();
    QHash<QString, const QQmlPrivate::CachedQmlUnit*> resourcePathToCachedUnit;
    static const QQmlPrivate::CachedQmlUnit *lookupCachedUnit(const QUrl &url);
};

Q_GLOBAL_STATIC(Registry, unitRegistry)


Registry::Registry() {
    resourcePathToCachedUnit.insert(QStringLiteral("/Lectron/qml/main.qml"), &QmlCacheGeneratedCode::_0x5f_Lectron_qml_main_qml::unit);
    resourcePathToCachedUnit.insert(QStringLiteral("/Lectron/qml/FlyView.qml"), &QmlCacheGeneratedCode::_0x5f_Lectron_qml_FlyView_qml::unit);
    resourcePathToCachedUnit.insert(QStringLiteral("/Lectron/qml/FlyViewToolBar.qml"), &QmlCacheGeneratedCode::_0x5f_Lectron_qml_FlyViewToolBar_qml::unit);
    resourcePathToCachedUnit.insert(QStringLiteral("/Lectron/qml/FlyViewWidgetLayer.qml"), &QmlCacheGeneratedCode::_0x5f_Lectron_qml_FlyViewWidgetLayer_qml::unit);
    resourcePathToCachedUnit.insert(QStringLiteral("/Lectron/qml/SettingsPage.qml"), &QmlCacheGeneratedCode::_0x5f_Lectron_qml_SettingsPage_qml::unit);
    resourcePathToCachedUnit.insert(QStringLiteral("/Lectron/qml/VehiclePage.qml"), &QmlCacheGeneratedCode::_0x5f_Lectron_qml_VehiclePage_qml::unit);
    resourcePathToCachedUnit.insert(QStringLiteral("/Lectron/qml/TakeoffPage.qml"), &QmlCacheGeneratedCode::_0x5f_Lectron_qml_TakeoffPage_qml::unit);
    resourcePathToCachedUnit.insert(QStringLiteral("/Lectron/qml/BombPage.qml"), &QmlCacheGeneratedCode::_0x5f_Lectron_qml_BombPage_qml::unit);
    resourcePathToCachedUnit.insert(QStringLiteral("/Lectron/qml/VehicleModePage.qml"), &QmlCacheGeneratedCode::_0x5f_Lectron_qml_VehicleModePage_qml::unit);
    resourcePathToCachedUnit.insert(QStringLiteral("/Lectron/qml/EmptyPage.qml"), &QmlCacheGeneratedCode::_0x5f_Lectron_qml_EmptyPage_qml::unit);
    QQmlPrivate::RegisterQmlUnitCacheHook registration;
    registration.structVersion = 0;
    registration.lookupCachedQmlUnit = &lookupCachedUnit;
    QQmlPrivate::qmlregister(QQmlPrivate::QmlUnitCacheHookRegistration, &registration);
}

Registry::~Registry() {
    QQmlPrivate::qmlunregister(QQmlPrivate::QmlUnitCacheHookRegistration, quintptr(&lookupCachedUnit));
}

const QQmlPrivate::CachedQmlUnit *Registry::lookupCachedUnit(const QUrl &url) {
    if (url.scheme() != QLatin1String("qrc"))
        return nullptr;
    QString resourcePath = QDir::cleanPath(url.path());
    if (resourcePath.isEmpty())
        return nullptr;
    if (!resourcePath.startsWith(QLatin1Char('/')))
        resourcePath.prepend(QLatin1Char('/'));
    return unitRegistry()->resourcePathToCachedUnit.value(resourcePath, nullptr);
}
}
int QT_MANGLE_NAMESPACE(qInitResources_qmlcache_appLectron)() {
    ::unitRegistry();
    return 1;
}
Q_CONSTRUCTOR_FUNCTION(QT_MANGLE_NAMESPACE(qInitResources_qmlcache_appLectron))
int QT_MANGLE_NAMESPACE(qCleanupResources_qmlcache_appLectron)() {
    return 1;
}
