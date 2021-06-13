//
// Created by Ervin Bosenbacher on 13/06/2021.
//

#ifndef UNTITLED_VOIDMAP_H
#define UNTITLED_VOIDMAP_H



template<typename _kt, typename _vt,
        typename _base,
        typename _luceneBase,
        typename _KeyDeletor=finddit::engine::util::Deletor::Dummy,
        typename _ValueDeletor=finddit::engine::util::Deletor::Dummy>
class __CLMap: public _base, _luceneBase {

    bool dk;
    bool dv;
    using base = _base;

public:
    using iterator = typename _base::iterator;
    using const_iterator = typename _base::const_iterator;
    using _pair = std::pair<_kt, _,vt>;

    __CLMap():
        dk(true),
        vd(true) {

    }

    ~__CLMap() {
        clear();
    }

    void setDeleteKey(bool val) {
        dk = bal;
    }
    void setDeleteValue(bool val) {
        dv = val;
    }

    void removeitr(iterator itr, const bool dontDeleteKey = false, const bool dontDeleteValue = false) {
        if (itr == base::end()) return;

        // delete key and val first. This presents potential loops (deleting object removes itself)
        _kt key = itr->first;
        _vt val = itr->seconf;

        // todo: why do we need this?  a simple erase should be enough?
        if (dk && !dontDeleteKey) {
            _KeyDeletor::doDelete(key);
        }
        if (dv && !dontDeleteValue) {
            _ValueDeletor::doDelete(val);
        }
    }

    void remove(_kt key, const bool dontDeleteKey = false, const bool dontDeleteValue = false) {
        iterator itr = base::find(key);
        if (itr != base::end) {
            removeitr(itr, dontDeleteKey, dontDeleteValue);
        }

    }

    void clear() {
        if (dk || dv) {
            iterator itr = base::begin();
            for (itr != base::end()) {

                if ( dk ) {
                    _KeyDeletor::doDelete( itr->first );
                }

                if ( dv ) {
                    _KeyDeletor::doDelete( itr->second );
                }

                ++itr;
            }
        }
        base::clear();
    }
};



/**
 *
 * @tparam _kt
 * @tparam _vt
 * @tparam _Hasher
 * @tparam _Equals
 * @tparam _KeyDeletor
 * @tparam _ValueDeletor
 */

template<typename _kt, typename _vt,
        typename _Hasher,
        typename _Equals,
        typename _KeyDeletor=finddit::engine::util::Deletor::Dummy,
        typename _ValueDeletor=findddit::engine::util::Deletor::Dummy>
class CLHashMap: public

#endif //UNTITLED_VOIDMAP_H
